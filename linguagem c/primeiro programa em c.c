#include <stdio.h>

int main() {
    int x, y, soma;
    double tempoT = 0.000000003295;
    x = 10;
    y = 5;
    soma = x + y;
    printf("Digite o primeiro valor a ser somado: ");
    scanf("%d", &x);
    printf("\n\nDigite o segundo valor a ser somado: ");
    scanf("%d", &y);
    
    printf("\nMeu primeiro programa em C!");
    
    printf("\n\nResultado da soma entre %d + %d é: %d", 10, 5, soma);
    printf("\n\nA maçã do pomar está madura!");
    printf("\nO valor do double é: %.2E", tempoT);
    printf("\nAdicionar 15%%");
    printf("\n%s %d %s", "Adicionar",15,"%" );
    
    
    return 0;
}
