/*Escreva um algoritmo que leia o número de votos brancos, o número de votos nulos e o número de votos válidos em um município, 
calcule e escreva o percentual de votos brancos, nulos e válidos em relação ao total de votos no município.*/
#include <stdio.h>
int main() {
       float v_brancos, v_validos, v_nulos, votos, p_brancos, p_validos, p_nulos;
 
       printf("Digite o número de votos brancos: ");
       scanf("%f", &v_brancos);
 
       printf("Digite o número de votos nulos: ");
       scanf("%f", &v_nulos);
 
       printf("Digite o número de votos válidos: ");
       scanf("%f", &v_validos);
 
       votos = v_brancos + v_nulos + v_validos;
 
       p_brancos = (v_brancos / votos) * 100;
       p_nulos = (v_nulos / votos) * 100;
       p_validos = (v_validos / votos) * 100;
 
       printf("O percentual de votos brancos é: %.2f" "%%", p_brancos);
       printf("\nO percentual de votos nulos é: %.2f" "%%", p_nulos);
       printf("\nO percentual de votos brancos é: %.2f" "%%", p_validos);

       return 0;
}
