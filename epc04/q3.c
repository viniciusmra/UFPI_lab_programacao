/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 29/03/2022
    EPC04 - QUESTÃO 03

    Faça um programa que crie um arquivo no qual contém 5 números decimais de 0 a 10 
    separados por espaços em branco que representam as notas de um aluno, definidas internamente. 
    Em seguida, faça a leitura desse arquivo, calcule e imprima a média dessas notas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main(){
    float nota;
    double somaNotas;
    FILE *arquivo ; 
    char leitura[100];
    char *separado;

    // Cria ou sobrescreve o arquivo:
    arquivo = fopen("notas.txt", "w");
    srand(35); // Defini uma seed constante para poder dar sempre o mesmo resultado.

    for(int i = 0; i < 5; i++){
        nota = (rand()%101)/(float)10;
        fprintf(arquivo, "%.1f ", nota);
    }
    fclose(arquivo);

    // Faz a leitura e os cálculos
    arquivo = fopen("notas.txt", "r");

    if(arquivo != NULL){
        //faz a leitura
        if(fgets(leitura, 100, arquivo)){
            printf("Foi lido no arquivo: \"%s\"\n",leitura);
            separado = strtok(leitura," "); // usa a função strtok para separar a linha lida
            while(separado != NULL){
                somaNotas += strtod(separado,NULL);
                separado = strtok(NULL," ");
            }

            printf("A media e: %.1f\n", somaNotas/5); // Calcula a media
        }
    }
    fclose(arquivo);
}