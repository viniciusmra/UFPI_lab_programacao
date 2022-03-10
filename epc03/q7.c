/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 09/03/2022
    EPC03 - QUESTÃO 07

    Faça um programa que recebe duas Strings e verifique se a segunda faz parte da primeira. A saída deve ser “SUBSTRING” ou “NAO SUBSTRING”. 
    Por exemplo: se as entradas forem "estudo e tecnologia" e "estudo", a saída deve ser “SUBSTRING”, pois "estudo” faz parte de “estudo e tecnologia”.

*/

#include <stdio.h>
#include <string.h>


void main(){
    char str1[100], str2[100];
    
    printf("String principal: ");
    gets(str1);
    printf("Substring: ");
    gets(str2);

    if(strstr(str1,str2) != NULL){
        printf("SUBSTRING\n");
    } else{
        printf("NAO SUBSTRING\n");
    }

}