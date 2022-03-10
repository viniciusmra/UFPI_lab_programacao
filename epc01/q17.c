/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q17
 */

#include <stdio.h>

int main(){
    int n;
    float a = 0;
    
    printf("Digite n: ");
    scanf("%d", &n);
    a = n;
    for(int i = 1; i < n; i++){
        a += (n-i)/((float)(1+i));
    }
    printf("A = %.2f\n", a);

}
