/* Uma empresa decide dar um aumento aos seus funcionários de acordo com as tabelas desalario atual e tempo de serviço de um funcionário.
• Escreva um algoritmo em pseudocódigo que leia o valor do salario atual e o tempo de serviçode um funcionário na empresa, calcule o novo salario desse funcionário e apresente o resultadona tela. */
#include <stdio.h>
int main() {
    float s_atual, tempo, novo_salario;
    float reajuste=0;
    int bonus=0;
    
    printf("Informe o salário atual do funcionário: ");
    scanf("%f", &s_atual);
    
    printf("Informe o tempo de serviço do funcionário em anos: ");
    scanf("%f", &tempo); 
    
    if(s_atual <= 500){
        reajuste = 0.25 * s_atual;
    }
    else if(s_atual <= 1000){
        reajuste = 0.20 * s_atual;
    }
    else if(s_atual <= 1500){
        reajuste = 0.15 * s_atual;
    }
    else if(s_atual <= 2000){
        reajuste = 0.10 * s_atual;
    }
    else{
        reajuste = 0;
    }
    
    if(tempo < 1 ){
        bonus = 0;
    }
    else if(tempo >= 1 && tempo <= 3){
        bonus = 100;
    }
    else if(tempo >= 4 && tempo <= 6){
        bonus = 200;
    }
    else if(tempo >= 7 && tempo <= 10){
        bonus = 300;
    }
    else{
        bonus = 500;
    }                

    novo_salario = s_atual + reajuste + bonus;
    
    printf("O valor do salário atual é de: %.1f reais", s_atual);
    printf("\nO valor do reajuste é de: %.1f reais", reajuste);
    printf("\nO valor do bônus é de: %d reais", bonus);
    printf("\nO valor do novo salário é de %.1f reias", novo_salario);
    
    return 0;
}
