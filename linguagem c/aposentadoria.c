#include <stdio.h>
int main (){
int idade, tempo;
 
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
 
  printf("Digite o seu tempo de servico: ");
  scanf("%d", &tempo);
 
  if (idade < 1 && idade > 160){
    printf("Voce nao esta apto a aposentadoria!"); 
 }
      else if (tempo < 0 && tempo > 90){
        printf ("O seu tempo de servico e invalido!"); 
     }
        else if (idade >= 67 || tempo >= 33){
          printf("Voce pode se aposentar!");
       }
            else if (idade >= 58 && tempo >= 26){
              printf("Voce pode se aposentar!");
         }
                else {
                  printf("Voce nao pode se aposentar!");
           }
 
  return 0;
}
