/* 
        Vinícius Alves de Moura - viniciusmra@gmail.com - 22/02/2022
        Ciência da computação UFPI - Lab. de Programação
        EPC01 - Q12
 */

#include <stdio.h>

int main(){
    int idade, contIdade = 0, contAltura = 0; 
    float altura, idMed = 0, altMed = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        if(altura < 1.7){
            contIdade++;
            idMed+=idade;
        }
        if(idade > 20){
            contAltura++;
            altMed+=altura;
        }
    }
    printf("a idade média dos alunos com menos de 1,70 m de altura: %.1f\n",(float)(idMed/contIdade));
    printf("a altura média dos alunos com mais de 20 anos. %.1f\n",(float)(altMed/contAltura));

}