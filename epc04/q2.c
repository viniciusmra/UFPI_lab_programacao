/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 29/03/2022
    EPC04 - QUESTÃO 02

    Crie um segundo programa para fazer uma quantidade N de jogos da Mega-Sena, tomando os cuidados necessários para que cada jogo não tenha números repetidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função que verifica se o número sorteado ja está no array
int checkRepetido(int n, int nun[]){
    for(int i = 0; i < 6; i++){
        if(nun[i] == n){
            return 0;
        }
    }
    return 1;
}

void main(){
    int n, sort;
    srand(time(0));
    scanf("%d", &n);
    
    // Primeiro laço se repete N vezes, gerando as N combinações do sorteio
    for(int i = 0; i < n; i++){
        int numeros[] = {0,0,0,0,0,0};
        printf("%d - ", i+1);

        // O segundo laço gera os 6 números do sorteio
        for(int j = 0; j < 6; j++){
            // O laço while roda enquanto não é sorteado um número que ainda não foi sorteado.
            while(1){
                sort = (rand() % 60) + 1;
                if(checkRepetido(sort,numeros)){
                    numeros[j] = sort;
                    printf("%d ", sort);
                    break;
                }
            }
        }
        printf("\n");
    }
}