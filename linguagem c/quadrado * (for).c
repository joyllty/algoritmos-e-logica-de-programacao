/* Escreva um programa que leia o tamanho do lado de um quadrado e imprima um quadrado
daquele tamanho com asteriscos.
• O programa deve funcionar para quadrados com lados de todos os tamanhos entre 2 e 20. */
#include <stdio.h>
#include <string.h>
int main(){
  int i, j, lado;

  printf("PROGRAMA CRIADOR DE QUADRADOS\n");
  printf("Informe o tamanho do lado do quadrado: ");
  scanf("%d", &lado);

  if(lado > 2 && lado < 20){
    for(i = 0; i < lado; i++){
      for(j = 0; j < lado; j++){
          printf("*");
      }
    printf("\n");
    }
  }
  else
    printf("\nTamanho do quadrado inválido!");
  
  return 0;
}
