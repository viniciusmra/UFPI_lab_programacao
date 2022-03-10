/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q11
 */

#include <stdio.h>

int main(){
    int tempo, inf24 = 0, sup600 = 0; 
    float salario, media = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o salario: ");
        scanf("%f", &salario);
        printf("Digite o tempo de servico: ");
        scanf("%d", &tempo);
        
        if(tempo < 24){
            inf24++;
        }
        
        media=+tempo;
        
        if(salario > 600){
            sup600++;
        }
    }
    printf("Inferior a 24: %d\n",inf24);
    printf("Tempo medio: %.1f\n",media/10.0);
    printf("Superior a 600: %.1f%%\n",(sup600/10.0)*100);

}