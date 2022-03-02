/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 02/03/2022
    EPC02 - QUESTÃO 05

    Escreva um programa que contenha três variáveis do tipo inteiro. 
    Compare seus endereços, exiba o maior endereço e atribua o valor 10 a essa variável.
*/

#include <stdio.h>

void main(){
    int a, b, c;

    // Imprime o endereço das variáveis
    printf("a: %p\nb: %p\nc: %p\n",&a, &b, &c);

    // Encontra o maior endereço
    if(&a > &b || &a > &c){
        printf("A variavel \"a\" tem endereco maior!\n");
        a = 10; // atribui o valor
    } else if(&b > &a || &b > &c){
        printf("A variavel \"b\" tem endereco maior!\n");
        b = 10; // atribui o valor
    }else{
        printf("A variavel \"c\" tem endereco maior!\n");
        c = 10; // atribui o valor
    }
}