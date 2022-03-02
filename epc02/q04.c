/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 02/03/2022
    EPC02 - QUESTÃO 04

    Escreva um programa que recebe 5 valores inteiros e imprime se o valor é positivo, 
    negativo ou zero para cada um. Utilize a função Verificar especificada abaixo:
    
    Nome: Verificar.
    Descrição: Retorna 1 para valores positivos, -1 para negativos e 0 para o valor 0.
    Entrada: int n.
    Saída: (int) : 1, -1 ou 0.
*/

#include <stdio.h>

int verificar();

void main(){
    int valor;

    // Laço para ler os cinco valores
    for(int i = 0; i < 5; i++){
        printf("%d - ", i+1);
        scanf("%d", &valor);
        printf("%d\n", verificar(valor)); // chama a função de verificação e imprime a sua saída
    }
}
// Função que verifica se o valor é positivo negativo ou zero e retorna 1,-1 ou 0 respectivamente.
int verificar(int n){
    if(n > 0){
        return 1;
    } else if(n < 0 ){
        return -1;
    }else {
        return 0;
    }
}