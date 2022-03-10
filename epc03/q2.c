/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 09/03/2022
    EPC03 - QUESTÃO 02

    Uma rede social só permite 200 caracteres por publicação, pensando nisso faça um programa que seja capaz de identificar 
    o tamanho de uma string recebida do usuário informando o comprimento da string.
    Por exemplo: “O texto recebido tem X caracteres e pode ser postado” ou “O texto recebido tem mais de 200 caracteres e não pode ser postado”. 
*/

#include <stdio.h>
#include <string.h>
#define STR_MAX 200

void main(){
    char str[STR_MAX*5];

    gets(str);
    
    if(strlen(str) > STR_MAX){
        printf("O texto recebido tem mais de %d caracteres e nao pode ser postado\n", STR_MAX);
    }else{
        printf("O texto recebido tem %d caracteres e pode ser postado\n", strlen(str));
    }
}