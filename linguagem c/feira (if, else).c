#include <stdio.h>
int main() {
    float morangos, macas, valor1, valor2, t_frutas, t_dinheiro;
    
    printf("Digite a quantidade de morangos adquiridos em quilos: ");
    scanf("%f", &morangos);
    
    printf("Digite a quantidade de maçãs adquiridas em quilos: ");
    scanf("%f", &macas);
    
    if(morangos <= 5) {
        valor1 = morangos * 6.50;
    }
        else if(morangos > 5){
            valor1 = morangos * 6.20;
        }
            
    if(macas <= 5) {
        valor2 = macas * 3.80;
    }
        else if(macas > 5){
            valor2 = macas * 3.50;
        }        
            
    t_dinheiro = valor1 + valor2;
    t_frutas = morangos + macas;
    
    if(t_frutas > 10 || t_dinheiro > 50){
        t_dinheiro = t_dinheiro * 0.9;
    }
    
    printf("O cliente irá levar %.2f quilos de fruta! \nO valor a ser pago pelo cliente é: %.2f ", t_frutas, t_dinheiro);
                
    return 0;
}
