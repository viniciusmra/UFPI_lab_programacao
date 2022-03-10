/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q6
 */

#include <stdio.h>

int main(){
    int idade, menor30 = 0;
    float media = 0;
    for(int i = 0; i < 10; i++){
        printf("digite a %da idade: ", i+1);
        scanf("%d", &idade);
        if(idade < 30){
            menor30++;
        }
        media+=idade;
    }
    
    printf("%d pessoa(s) tem idade menor que 30\n", menor30);
    printf("Media das idades dos membros: %.1f anos \n", media/10.0);
    return 0;
}