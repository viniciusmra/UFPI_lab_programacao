/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 02/03/2022
    EPC02 - QUESTÃO 01

    Preencher um vetor com os números de 0 a 12, e depois mostrar os elementos ímpares do vetor de trás para frente.
*/

#include <stdio.h>

void main(){
    int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    int tam = 13;

    printf("Numeros impares:\n", tam);

    for(int i = tam-1; i >= 0; i--){    // laço para percorrer o vetor
        if(a[i]%2 != 0){                // Testa se o elemento é ímpar
            printf("%d\n", a[i]);       // Se sim, imprime o número
        }
    }
}

