/*Faça um programa que, dada a idade de uma pessoa, determine sua classificação como
menor de idade (menos de 18 anos), maior de idade ou terceira idade (idade igual ou superior a 65 anos).*/

#include <stdio.h>
int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 18) {
        printf("Você é menor de idade ");
    }
    else if (idade >= 18 && idade < 65 ) {
        printf("Você é maior de idade");    
    }
     else {
         printf("O senhor é da terceira idade");
     }

    return 0;
}
