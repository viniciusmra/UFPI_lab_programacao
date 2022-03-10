/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 09/03/2022
    EPC03 - QUESTÃO 06

    Faça um programa que identifique o nome correto e a senha correta de uma pessoa, esses dados foram definidos 
    internamente no programa(pode ser qualquer nome e senha). O programa recebe um nome e uma senha do teclado e 
    só autoriza o acesso se forem os dados esperados.
*/

#include <stdio.h>
#include <string.h>

#define LOGIN "olamundodebosta"
#define SENHA "prefiroskyrim"

void main(){
    char login[100], senha[100];
    
    printf("login: ");
    scanf(" %s", &login);
    printf("senha: ");
    scanf(" %s", &senha);

    if(strcmp(login, LOGIN) == 0 && strcmp(senha,SENHA) == 0){
        printf("Acesso autorizado\n");
    } else{
        printf("Acesso nao aturoizado\n");
    }
}
