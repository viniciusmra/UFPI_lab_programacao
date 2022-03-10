/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q4
 */

#include <stdio.h>
#include <math.h>

int main(){
    int n, x;
    
    printf("Digite o numero de valores: ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        printf("Digite x: ");
        scanf("%d", &x);
        printf("y = %.3f\n", sqrt((x*x + 3)/2.0));
    }
    return 0;
}