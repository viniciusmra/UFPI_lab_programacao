/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 09/03/2022
    EPC03 - QUESTÃO 01

    Faça um programa que leia três palavras pelo teclado, e armazene cada palavra em uma string. 
    Depois, concatene todas as strings lidas em uma única string. Ao final do programa imprima o resultado dessa concatenação. 
*/

#include <stdio.h>
#include <string.h>

void main(){
    char str1[100], str2[100], str3[100], strFinal[300] = "";
    
    printf("Primeira palavra: ");
    scanf("%s", &str1);
    printf("Segunda palavra: ");
    scanf("%s", &str2);
    printf("Terceira palavra: ");
    scanf("%s", &str3);
    
    strcat(strFinal,str1); // strcat coloca str1 no final de strFinal
    strcat(strFinal,str2);
    strcat(strFinal,str3);
    
    printf("Palavras concatenas: %s\n", strFinal);
}