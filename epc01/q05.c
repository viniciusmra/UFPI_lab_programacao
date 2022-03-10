/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q5
 */

#include <stdio.h>
#include <math.h>

int main(){
    for(int angulo = 0; angulo <= 360; angulo+=5){
        printf("%d\t%.2f\n",angulo, sin((angulo*M_PI)/180.0));
    }
    return 0;
}