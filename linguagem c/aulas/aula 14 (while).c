/* 1. Escreva um algoritmo em pseudocódigo que realize a soma dos números fornecidos pelo usuário até que o número lido seja igual a zero. Ao 
final, mostre o resultado da soma. Em seguida, transcreva para a linguagem C */

#include <stdio.h>
int main() {
  int num, soma = 0;

  printf("Informe o número a ser somado: ");
  scanf("%d", &num);
 
  while (num != 0){
    soma = soma + num;
    printf("O subtotal da soma é: %d", soma);
    printf("\n\nInforme o número a ser somado: ");
    scanf("%d", &num); 
  }
 
  printf("\nA soma totaliza em: %d", soma);
  printf("\nPrograma encerrado!");
 
  return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------
/* 2. Escreva um programa que forneça quantos números devem existir em sequência a partir do 1(1, 2, 3, 4,...) para que a sua soma ultrapasse 
o valor 100. Considerar o mínimo possível de número. */

#include <stdio.h>
int main() {
  int num = 1, soma = 0;

  printf("Programa que soma os números em sequência a partir do 1 para que a soma ultrapasse 100.");
 
  while (soma < 100){
 
    printf("\n\nSubtotal: %d", soma);
    printf("\nQuantidade: %d", num);
    sleep(1);

    soma = soma + num;
    num = num + 1;
 
  }
  printf("\n\nSubtotal: %d", soma);
 
  return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------

/* 3. Escreva um programa que verifique a validade de uma senha formada por números inteiros fornecida pelo usuário (a senha válida é o número 
2024). Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser mostrado na tela e deve ser solicitada uma nova 
senha até que ela seja válida. Caso contrário deve ser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com um número de vezes que a senha 
foi informada. */


#include <stdio.h>
int main() {
  int senha, num = 0, contador = 1;

  senha = 2024;
 
  while (num != senha){
    printf("\n\nInforme a senha: ");
    scanf("%d", &num);
      if(num != senha){
        printf("\nSenha incorreta! \nACESSO NEGADO");
      } 
 
    if(contador >= 3){
      printf("\n\nTrês tentativas incorretas! \nInforme uma nova senha: ");
      scanf("%d", &senha);
      contador = 0;
    }
    contador++;
  }
 
  printf("\nSenha correta! \nACESSO PERMITIDO");
 
  return 0;
}
