#include <stdio.h>
int main () {
       int dividendo, divisor, resto;
       float resultado; 
 
       dividendo = 5;
       divisor = 2;
 
       resultado = dividendo / divisor;
       resto = dividendo % divisor; 
 
       printf("O resultado da divisão de %d por %d é: %.0f", dividendo, divisor, resultado);
 
       printf("\nO resto da divisão é: %d", resto);
 
       return 0;
}
