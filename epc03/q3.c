/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 09/03/2022
    EPC03 - QUESTÃO 03

    Faça um programa no qual possua uma função que recebe uma palavra, inverta e determine se é igual a original ou não(palíndromo). 
    Nessa função o retorno deve ser true ou false e a função principal(main) deve receber essa informação e informar ao usuário se é ou não um palíndromo. 
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool inverter(char *string){
    char gnirts[strlen(string)];
    int count = 0;
    for(int i = strlen(string)-1; i >= 0; i--){
        gnirts[count++] = string[i];
    }
    gnirts[count] = '\0';
    if(strcmp(string,gnirts) == 0){
        return true;
    } else{
        return false;
    }
}

void main(){
    char str[100];
    printf("Digite a palavra: ");
    scanf(" %s", &str);

    if(inverter(str)){
        printf("%s eh um palindromo\n", str);
    }else{
        printf("%s nao eh um palindromo\n", str);
    }
}