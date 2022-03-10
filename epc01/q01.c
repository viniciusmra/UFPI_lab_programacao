/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q1
 */

#include <stdio.h>

int main(){
    int n;
    float a, b;

    printf("Digite o numero de alunos: ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        printf("Aluno numero %d\n", i+1);
        printf("Digite a primeira nota: ");
        scanf("%f",&a);
        printf("Digite a segunda nota: ");
        scanf("%f",&b);
        printf("A media e: %.1f\n", (a+b)/2);
    }
    return 0;
}