/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q9
 */

#include <stdio.h>

int main(){
    char nome;
    char sexo;
    float altura;
    float maiorAltura = 0;
    char nomeMaior;
    int mediaMulher = 0;
    int contadorHomem = 0;
    int contadorMulher = 0;
    
    for(int i = 0; i < 10; i++){
        printf("%da pessoa:\n", i+1);
        printf("Digite o nome (somente 1 char): ");
        scanf(" %c", &nome);
        
        printf("Digite a altura: ");
        scanf("%f",&altura);
        
        printf("Digite o sexo (m ou f): ");
        scanf(" %c", &sexo);
        
        if(altura > maiorAltura){
            maiorAltura = altura;
            nomeMaior = nome;
        }
        
        if(sexo == 'f' || sexo == 'F'){
            contadorMulher++;
            mediaMulher += altura;
        }else{
            contadorHomem++;
        }
    }
    
    printf("Maior altura e nome: %c - %.1f\n", nomeMaior, maiorAltura);
    printf("Media mulheres: %.1f\n", (float)(mediaMulher/contadorMulher));
    printf("Homens: %d\n", contadorHomem);
    printf("Porcentagem de mulheres: %.1f%%\n", (contadorMulher/10.0)*100);
}