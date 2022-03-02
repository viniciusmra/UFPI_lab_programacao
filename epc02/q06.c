/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 02/03/2022
    EPC02 - QUESTÃO 06

    Faça um programa que leia 2 valores do tipo double e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, 
    ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função,
    A vai conter o valor de B e B o valor de A. Por fim, imprima os valores atuais das variáveis com 1 casa decimal.
*/

#include <stdio.h>

// Função que troca o valor de duas variáveis
void troca(double *x, double *y){
    double aux = *x;
    *x = *y;
    *y = aux;
}
void main(){
    double a, b;

    // Entrada de dados
    printf("Digite dois valores: ");
    scanf("%lf %lf", &a, &b);
    printf("Antes da troca:\nValor a: %.2lf\nValor b: %.2lf\n", a, b);
    
    // Função de troca
    troca(&a,&b);

    // Imprime a saída com os valores trocados
    printf("Depois da troca:\nValor a: %.2lf\nValor b: %.2lf\n", a, b);
}