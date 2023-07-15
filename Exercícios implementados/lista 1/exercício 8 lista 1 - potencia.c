/*8. Faça um programa para ler dois valores (x e y), calcular e mostrar x elevado à potência de y.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int X, Y, RESULTADO;
    printf("Digite um numero:\n");
    scanf("%d", &X);
    printf("Digite o valor da potencia:\n");
    scanf("%d", &Y);
    RESULTADO = pow(X,Y);
    printf("O resultado e:\n\n%d\n\n", RESULTADO);
    return 0;
}
