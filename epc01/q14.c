/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q14
 */

#include <stdio.h>

int main(){
    int n, media = 0, cont = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(int i = n; i > 0; i--){
        if(i%2 != 0){
            cont++;
            media += i;
        }
    }
    printf("Media: %.1f\n", (float)(media/cont));

}