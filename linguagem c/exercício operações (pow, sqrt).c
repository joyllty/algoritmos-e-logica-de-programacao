#include <stdio.h>
#include <math.h>
      int main() {
      float num1, num2, soma, prod, quad1, quad2, raiz;
    
      printf(" Digite o primeiro número: ");
      scanf("%f", &num1);
    
      printf(" Digite o segundo número: ");
      scanf("%f", &num2);
    
      soma = num1 + num2; 
    
      prod = num1 * pow(num2, 2);
    
      quad1 = pow(num1, 2);
    
      quad2 = pow(num2, 2);
    
      raiz = sqrt(quad1 + quad2);
    
      printf("\n\n A soma dos números é: %.0f", soma);
      printf("\n O produto dos números é: %.0f", prod);
      printf("\n O quadrado do primeiro número é: %.0f", quad1);
      printf("\n A raiz quadrada da soma dos quadrados é: %.0f", raiz);
    
      return 0;
}
