/* Tendo como dados de entrada a altura e o gênero de uma pessoa, faça um programa que calcule o seu peso ideal, de acordo com as seguintes fórmulas:
- Para homens: 72.7 x altura – 58- Para mulheres: 62.1 x altura - 44.7 */
#include <stdio.h>
int main() {
    float altura, p_ideal;
    char genero;
    
    printf("Informe seu gênero ('F': Feminino, 'M': Masculino, 'O': Outro): ");
    scanf("%c", &genero);
    
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    if(genero == 'M' || genero == 'm'){
        p_ideal = 72.7 * altura - 58;
        printf("SEXO MASCULINO");
        printf("\nSeu peso ideal é: %.2f", p_ideal); 
    }
    else if(genero == 'F' || genero == 'f'){
        p_ideal = 62.1 * altura - 44.7;
        printf("SEXO FEMININO");
        printf("\nSeu peso ideal é: %.2f", p_ideal);   
    }
    else if(genero == 'O' || genero == 'o'){
        printf("OPÇÃO OUTRO");
        printf("\nNão temos a equação para esse gênero :(, mas já estamos em desenvolvimento! ");
    }
    else{
        printf("Opção inválida!\nRepita a operação.");
    }
    
    return 0;
}
