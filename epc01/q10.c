/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q10
 */

#include <stdio.h>

int main(){
    int pos = 0, neg = 0, nulos = 0, sum = 0;
    float numero, media = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        
        if(numero > 0){
            pos++;
            sum += numero;
        }else if(numero < 0){
            neg++;
            media += numero;
        } else{
            nulos++;
        }
    }
    printf("Positivos %d\n",pos);
    printf("Negativos %d\n",neg);
    printf("Nulos %d\n",nulos);
    printf("Media dos negativos %.1f\n", (float)(media/neg));
    printf("Soma positivos %d\n",sum);

}