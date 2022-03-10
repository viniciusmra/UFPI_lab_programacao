/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q16
 */

#include <stdio.h>

int main(){
    float sum = 0;

    
    for(int i = 1; i < 11; i++){
        if(i%2 == 0){
            sum += (i/i*i);
        } else{
            sum -= (i/i*i);
        }
        
    }
    printf("Soma: %.2f\n", sum);

}
