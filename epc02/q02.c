/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 02/03/2022
    EPC02 - QUESTÃO 02

    Em uma escola foram registradas as alturas das pessoas de uma sala de aula com 8 alunos, 
    deseja-se determinar quantos alunos possuem altura acima da média da turma. Escreva um programa (utilizando vetores) para calcular esta informação.
*/

#include <stdio.h>

void main(){
    float altura[8], soma = 0, media;
    int contador = 0;

    // Laço das entradas do usuário
    for(int i = 0; i < 8; i++){
        printf("Digite a altura do aluno numero %d: ", i+1);
        scanf("%f", &altura[i]);
        soma += altura[i]; // Incremento da altura na variável soma
    }

    // Cálculo da média
    media = (float)soma/8;

    // Laço para determinar quantos alunos tem a altura maior que a média
    for(int i = 0; i < 8; i++){
        if(altura[i] > media){
            contador++;
        }
    }

    // Saídas
    printf("A media das alturas eh: %.2f\n", media);
    printf("%d alunos possuem altura acima da media\n", contador);
}