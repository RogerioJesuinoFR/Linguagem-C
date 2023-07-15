/* Fazer um algoritmo para determinar e escrever o valor do seguinte somatório: 
S = X – X2/3! + X4/5! – X6/7! + X8/9! - ...
usando os n primeiros termos do somatório. O valor de X e de n é fornecido pelo usuário*/

#include <stdio.h>

int main() 
{
    double X, SOMA = 0.0;
    int N, TERMO = 1, FATORIAL = 1;
    int SINAL = 1;

    printf("Digite o valor de X: ");
    scanf("%lf", &X);

    printf("Digite o numero de termos (n): ");
    scanf("%d", &N);

    do 
    {
        SOMA += SINAL * (X * TERMO) / FATORIAL;

        TERMO += 2;
        FATORIAL *= TERMO * (TERMO - 1);
        SINAL *= -1;

        N--;
    } while (N > 0);

    printf("O valor do somatorio e: %.2f\n", SOMA);

    return 0;
}
