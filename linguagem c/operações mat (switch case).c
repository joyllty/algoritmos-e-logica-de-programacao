/*Escreva um programa em C que mostre ao usuário um menu com 4 opções de operações matemáticas, as mais básicas, 
peça dois valores numéricos, realize o cálculo, e mostre o resultado na tela.*/
#include <stdio.h>
int main() {
  int num;
  float val1, val2, r1, r2, r3, r4;
 
  printf("Informe a operação desejada: \n 1: Adição \n 2: Subtração \n 3: Multiplicação \n 4: Divisão \n");
  scanf("%d", &num);
 
  printf("Digite um número inteiro: ");
  scanf("%f", &val1);
 
  printf("Digite outro número inteiro: ");
  scanf("%f", &val2);
 
  switch(num){
    case 1:
      r1 = val1 + val2;
      printf("O resultado da adição entre %.2f e %.2f é: %.2f", val1, val2, r1);
      break;
 
    case 2:
      r2 = val1 - val2;
      printf("O resultado da subtração entre %.2f e %.2f é: %.2f", val1, val2, r2);
      break;
 
    case 3:
      r3 = val1 * val2;
      printf("O resultado da multiplicação entre %.2f e %.2f é: %.2f", val1, val2, r3);
      break;
 
    case 4:
      if (val2 != 0){
        r4 = val1 / val2;
        printf("O resultado da divisão entre %.2f e %.2f é: %.2f", val1, val2, r4);
      }
      else {
        printf("Operação inválida!");
      }    
      break;
 
    default:
      printf("Operação inválida!");
 }
  
  return 0;
}
