/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 29/03/2022
    EPC04 - QUESTÃO 04

    Elabore um programa de frequência que escreva a lista de presença do dia dos alunos da disciplina em forma de arquivo. 
    Para isso, serão utilizados outros 2 arquivos, o primeiro é a lista de frequência do SIGAA 
    e o segundo a lista de nomes do chat do meet, sabendo que cada pessoa tem seu nick correspondente no meet que será identificado 
    pelo programa, logo somente aqueles que estão na lista do chat ganharão presença
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define nChars 100
#define nAlunos 50
#define txtSIGAA "EPC4_NomesSigaa.txt"
#define txtMeet "EPC4_NickMeet.txt"
#define txtPresenca "EPC4_freqMeetDia.txt"

struct Aluno{
    char nomeSIGAA[nChars];
    char nomeMeet[nChars];
    bool presente;
};

void lerArquivoSIGAA(struct Aluno alunos[]);
void lerArquivoMeet(struct Aluno alunos[]);
void verificarPresenca(struct Aluno alunos[], char data[]);
void formatarNome(char nome[], int nCharsParaDeletar);
void escreverSaida(struct Aluno alunos[], char data[]);


void main(){
    struct Aluno alunos[nAlunos];
    char data[11];
    
    lerArquivoSIGAA(alunos);
    lerArquivoMeet(alunos);
    verificarPresenca(alunos, data);
    escreverSaida(alunos, data);
}

// Lê o arquivo que contem a lista de nomes do SIGAA
void lerArquivoSIGAA(struct Aluno alunos[]){
    FILE *arquivo;
    int contador = 0;
    arquivo = fopen(txtSIGAA, "r");
    if(arquivo != NULL){
        while(fgets(alunos[contador].nomeSIGAA, nChars, arquivo) != NULL){
            if(alunos[contador].nomeSIGAA[strlen(alunos[contador].nomeSIGAA)-1] == '\n'){
                formatarNome(alunos[contador].nomeSIGAA, 1);
            } else{
                formatarNome(alunos[contador].nomeSIGAA, 0);
            }
            alunos[contador].presente = false;
            contador++;
        }
        while(contador < nAlunos){
            alunos[contador].nomeSIGAA[0] = '\0';
            alunos[contador].presente = false;
            contador++;
        }
    }
}

// Lê o arquivo que contem a lista de nicks do Meet
void lerArquivoMeet(struct Aluno alunos[]){
    FILE *arquivo;
    int contador = 0;
    arquivo = fopen(txtMeet, "r");
    if(arquivo != NULL){
        while(fgets(alunos[contador].nomeMeet, nChars, arquivo) != NULL){
            if(alunos[contador].nomeMeet[strlen(alunos[contador].nomeMeet)-1] == '\n'){
                formatarNome(alunos[contador].nomeMeet, 1);
            } else{
                formatarNome(alunos[contador].nomeMeet, 0);
            }
            contador++;
        }
    }
}

// Lê o arquivo de frequência e atribui presente a quem foi encontrado
void verificarPresenca(struct Aluno alunos[], char data[]){
    FILE *arquivo;
    int contador = 0;
    char nome[nChars];
    char fNome[nChars];
    
    arquivo = fopen(txtPresenca, "r");
    
    if(arquivo != NULL){
        bool encontrado;
        while(fgets(nome, nChars, arquivo) != NULL){
            encontrado = false;
            if(contador == 1){ // Se contador = 1, indica que é a linha da data
                if(nome[strlen(nome) - 1] == '\n'){
                    nome[strlen(nome) - 1] = '\0';
                }
                
                int contador2 = 0;
                for(int i = 0; i < strlen(nome); i++){
                    //if(i == 2 || i == 4){
                    //    data[contador2++] = '/';
                    //}
                    data[contador2++] = nome[i];
                }
            }else if(contador > 1 && nome[strlen(nome) - 4] == ':'){
                formatarNome(nome, 6);
                for (int i = 0; i < nAlunos; i++){
                    if(!strcmp(alunos[i].nomeMeet, nome)){
                        alunos[i].presente = true;
                        encontrado = true;
                        break;
                    }
                }
                if(!encontrado){
                    printf("> Nome %s nao encontrado na lista de alunos do SIGAA\n", nome);
                }
            }
            contador++;
        }
    }
}

// Formata os nomes, retirando caracteres do final e colocando em caixa alta
void formatarNome(char nome[], int nCharsParaDeletar){
    nome[strlen(nome) - nCharsParaDeletar] = '\0';
    for(int i = 0; i < strlen(nome); i++){
        nome[i] = toupper(nome[i]);
    }
}

// Abre e escreve no arquivo de saída. O nome do arquivo é "Saida - datadodia"
void escreverSaida(struct Aluno alunos[], char data[]){
    FILE *arquivo;
    char nomeArquivo[] = "SAIDA - ";
    strcat(nomeArquivo, data);
    arquivo = fopen(nomeArquivo, "w");
    if(arquivo != NULL){
        fprintf(arquivo,"Alunos faltantes do dia %s\n", data);
        printf("> Alunos faltantes do dia %s\n", data);
        for (int i = 0; i < nAlunos; i++){
            if(strlen(alunos[i].nomeSIGAA) > 0 && !alunos[i].presente){
                fprintf(arquivo,"%s\n", alunos[i].nomeSIGAA);
                printf("%s\n", alunos[i].nomeSIGAA);
            }
        }
    }
}