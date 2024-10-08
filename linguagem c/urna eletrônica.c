/* Faça um programa que simule a urna eletrônica. A tela a ser apresentada deverá ser da seguinte forma: As opções são:
[1] Candidato Nelson Rodrigues
[2] Candidato Carlos Luz
[3] Candidato Neves Rocha
[4] Nulo
[5] Branco
Entre com o seu voto:
O programa deverá ler os votos dos eleitores e, quando for informado o número 0, apresentaras seguintes informações:
a) O número de votos de cada candidato;
b) A porcentagem de votos nulos;
c) A porcentagem de votos brancos;
d) O candidato vencedor. */
#include <stdio.h>
int main() {
  int votosNelson = 0, votosCarlos = 0, votosNeves = 0;
  int votosNulos = 0, votosBrancos = 0, totalvotos = 0;
  float p_nulos, p_brancos;
  int voto;
  
    printf("As opções são:\n");
    printf("[1] Candidato Nelson Rodrigues\n");
    printf("[2] Candidato Carlos Luz\n");
    printf("[3] Candidato Neves Rocha\n");
    printf("[4] Nulo\n");
    printf("[5] Branco\n");
  
    do{
      printf("Entre com o seu voto ou 0 para encerrar: ");
      scanf("%d", &voto);
  
      switch(voto){
        case 1:
          votosNelson++;
          break;
        case 2:
          votosCarlos++;
          break;
        case 3:
          votosNeves++;
          break;
        case 4:
          votosNulos++;
          break;
        case 5:
          votosBrancos++;
          break;
        default:
          printf("Opção inválida! Tente novamente. \n");
    }
      
      totalvotos++;
      
      p_nulos = (votosNulos * 100) / totalvotos;
      p_brancos = (votosBrancos *100) / totalvotos;
  
     } while(voto != 0);
      
    printf("\nO número de votos de cada candidato é: \n Nelson Rodrigues: %d \n Carlos Luz: %d \n Neves Rocha: %d \n Nulos: %d \n Brancos: %d", votosNelson, votosCarlos, votosNeves, votosNulos, votosBrancos);
    printf("\nA porcentagem de votos nulos é: %.f%%", p_nulos);
    printf("\nA porentagem de votos brancos é: %.f%%", p_brancos);
    
    if (votosNelson > votosCarlos && votosNelson > votosNeves){
        printf("\nO candidato vencedor é o candidato Nelson Rodrigues!");
    }
    else if (votosCarlos > votosNelson && votosCarlos > votosNeves){
        printf("\nO candidato vencedor é o candidato Carlos Luz!");
    }    
    else if(votosNeves > votosNelson && votosNeves > votosCarlos){
        printf("\nO candidato vencedor é o candidato Neves Rocha!");
    }
    else{
        printf("\nEmpate nos votos!");
    }
    
   return 0;
}
