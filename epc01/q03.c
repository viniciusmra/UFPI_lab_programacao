/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q3
 */

#include <stdio.h>

int main(){
    int n, somador = 2;
    
    printf("Digite o numero de parcelas: ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        printf("%d ", somador);
        somador +=3;
    }
    return 0;
}