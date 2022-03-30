/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 29/03/2022
    EPC04 - QUESTÃO 01

    Construa um programa que receba da linha de comando em que o programa é executado um número natural e calcule o seu fatorial.
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n > 0){
        return n*fatorial(n-1);
    }else{
        return 1;
    }
}

void main(int argc, char *argv[]){

    if(argc <= 1){
        printf("Argumentos invalidos\n");
        exit(1);
    }
    int n = atoi(argv[1]);


    printf("%d! = %d\n", n, fatorial(n));
    
}