/* Escreva um programa que apresente na tela a tabuada de um número lido do teclado. Por exemplo, considerando que o número lido é 2, 
o formato da apresentação deve ser o seguinte: */
#include <stdio.h>
int main() {
  int num, i;

  printf("Digite um número e sua tabuada aparecerá: \n");
  scanf("%d", &num);

  for(i = 1; i <= 10; i ++){
      printf("\n%d x %d = %d", num, i, num * i);
  }

  return 0;
}
