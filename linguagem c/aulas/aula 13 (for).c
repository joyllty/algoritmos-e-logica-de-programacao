/* 1. Escreva um programa que mostre os números de 1 até 10, um número por linha. */

#include <stdio.h>
int main() {
  int numero;

  for(numero = 0; numero <= 10; numero++){
    printf("\n%d", numero);
 } 
 
 
  return 0;
}
------------------------------------------------------------------------------------------
/* 2. Escreva um programa que mostre na tela uma contagem regressiva de 10 até 0 para o lançamento de um foguete. Após o término da contagem 
regressiva, deve ser apresentada a palavra "Fogo!" */

#include <stdio.h>
int main() {
  int numero;

  printf("CONTAGEM REGRESSIVA PARA O LANÇAMENTO DO FOGUETE: \n");

  for(numero = 10; numero >= 0; numero--){
    printf("\n%d", numero);
    sleep(1);
 }
  printf("\nFogo!"); 
 
 
  return 0;
}
------------------------------------------------------------------------------------------
/* 3. Escreva um programa que mostre os números múltiplos de 5, no intervalo de 1 até 100.*/

#include <stdio.h>
int main() {
  printf("Programa que imprime os números múltiplos de 5, de 1 a 100");
 
  for(int cont = 0; cont <= 100; cont++){
  /*if(cont*5 <= 100){
  printf("\n%d", cont);
  } */
    if(cont % 5 == 0){
    printf("\n%d", cont);
    }
  } 
 
  return 0;
}
------------------------------------------------------------------------------------------
/* 7. Escreva um programa que leia o tamanho do lado de um quadrado e imprima um quadrado daquele tamanho com asteriscos. O 
programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.*/

#include <stdio.h>
int main() {
  int i, j, lado, maximo;
 
  printf("Informe o tamanho do lado do quadrado: ");
  scanf("%d", &lado);

  maximo = lado * lado;
 
  if (lado > 0){
    for(i = 1; i <= maximo; i++) {
      printf("*");
        if(i%lado == 0){
          printf("\n");
        }
    }
  } 

 /* if(lado > 0){
 for(i = 1; i <= lado; i++){
 for(j = 1; j <= lado; j++){
 printf("*");
 }
 printf("\n"); 
 }
 } */
 
  else{
   printf("Tamanho inválido!");
  }
 
  return 0;
}
