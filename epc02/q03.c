/*
    Ciência da computação - UFPI
    Laboratório de Programação - 2021.2
    Autor: Vinícius Alves de Moura - viniciusmra@gmail.com
    Data: 02/03/2022
    EPC02 - QUESTÃO 03

    Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2). 
    Todos os números e valores de retorno devem ser do tipo float, garantindo que o valor da distância seja mostrado somente se for positivo.
*/

#include <stdio.h>
#include <math.h>

float calcularDistancia();

void main(){
    float p1[2];
    float p2[2];
    float dist;

    // Entrada dos dados dos pontos
    printf("Digite os valores do primeiro ponto(x1 y1): ");
    scanf("%f %f", &p1[0], &p1[1]);
    printf("Digite os valores do segundo ponto(x2 y2): ");
    scanf("%f %f", &p2[0], &p2[1]);

    // Chama a função calcularDistancia
    dist = calcularDistancia(p1,p2);
    
    // Verifica se a distancia é positiva e imprime
    if(dist > 0){
        printf("A distancia entre os pontos e: %.2f\n", dist);
    }
    
}
// Função que retorna a distância entre dois pontos
float calcularDistancia(float a[], float b[]){
    float distX = b[0] - a[0];
    float distY = b[1] - a[1];
    return sqrt(distX*distX + distY*distY);
}

