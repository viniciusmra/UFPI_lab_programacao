/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q13
 */

#include <stdio.h>

int main(){
    int n, soma = 0, quant = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);
        
        if(n%2 == 0 && n!= 0){
            quant++;
        } else{
            soma += n;
        }
    }
    printf("Soma impares: %d\n", soma);
    printf("quantidade par: %d\n", quant);
}
