/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o garçom. 
Escreva um algoritmo que leia o valor gasto pelo cliente em um restaurante e mostre o valor da gorjeta e o valor total a ser pago*/
include <stdio.h>
int main() {
     float gasto, gorj, vtotal;
 
     printf("Digite o valor gasto:");
     scanf("%f", &gasto);
 
     gorj = gasto * 0.1;
 
     printf("O valor da gorjeta foi:" "%.2f", gorj);
 
     vtotal = gasto + gorj;
 
     printf("\nO valor total a ser pago é:" "%.2f", vtotal);

     return 0;
}
