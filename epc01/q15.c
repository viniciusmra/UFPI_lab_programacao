/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q15
 */

#include <stdio.h>

int main(){
    int n, sum = 0;

    
    for(int i = 85; i < 907; i++){
        if(i%2 == 0){
            printf("%d\n",i);
            sum += i;
        }
    }
    printf("Soma: %d\n", sum);

}
