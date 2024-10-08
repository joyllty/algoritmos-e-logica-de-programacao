/*Faça um programa que leia três valores A, B e C, e verifique se estes valores podem ser os comprimentos dos lados de um triângulo e, se forem, verificar se estes compõem um triângulo equilátero, isósceles ou escaleno.
• O programa também deve informar se não compuserem nenhum triângulo.
• Lembre-se ainda que:
• O comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados;
• Chama-se de triângulo equilátero ao triângulo que tem os comprimentos dos três lados iguais;
• Chama-se de triângulo isósceles ao triângulo que tem os comprimentos de dois lados iguais. Portanto, todo triângulo equilátero é também um triângulo isósceles; 
• Chama-se de triângulo escaleno todo triângulo que tem os comprimentos de seus três lados diferentes.*/
#include <stdio.h>
int main() {
    float val1, val2, val3;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);
    
    if (val1 < val2 + val3 && val2 < val1 + val3 && val3 < val2 + val3){
        printf("Esses valores verificam um triângulo!");
    }
    if (val1 == val2 && val2 == val3){
        printf("\nEsse triângulo é equilátero!");
    }
    else if (val1 == val2 || val2 == val3 || val1 == val3){
        printf("\nEsse triângulo é isósceles!");
    }
    else{
        printf("\nEsse triângulo é escaleno!");
    }
    
    return 0;
}
