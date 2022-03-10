/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q18
 */

#include <stdio.h>

int main(){
    int a, b, soma = 0;
    
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    for(int i = 0; i < a; i++){
        soma += b; 
    }
    printf("a*b = %d\n", soma);

}
