/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q8
 */

#include <stdio.h>

int main(){
    int n, fatorial = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(int i = n; i > 1; i--){
        fatorial = fatorial*i;
    }
    printf("Resultado %d\n", fatorial);
}