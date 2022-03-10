/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q7
 */

#include <stdio.h>

int main(){
    int saldo, devedor = 0, credor = 0;
    float media = 0;
    for(int i = 0; i < 10; i++){
        printf("digite o %do saldo: ", i+1);
        scanf("%d", &saldo);
        if(saldo < 0){
            devedor++;
        } else{
            credor++;
        }
        media+=saldo;
    }
    
    printf("O saldo medio eh: R$ %.2f\n",media/10.0);
    printf("A porcentagem de saldos devedores e: %.1f%%\n",(devedor/10.0)*100);
    printf("Numero de saldos credores e: %d\n",credor);
    return 0;
}