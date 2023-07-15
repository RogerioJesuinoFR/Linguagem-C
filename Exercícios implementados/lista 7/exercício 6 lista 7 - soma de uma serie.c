/*Fazer um programa em c, utilizando "do while", que calcule e escreva a soma dos 5 primeiros termos da série:
1!/1 - 2!/3 + 3!/7 - ... + 5!/31*/

#include <stdio.h>

int main()
{
    int N = 1, SINAL = 1;
    double SOMA = 0.0, TERMO = 1.0;
    do
    {
        double FATORIAL = 1.0;
        int I;

        for (I = 1; I <= N; I++)
        {
            FATORIAL *= I;
        }

        SOMA += SINAL * (FATORIAL / TERMO);

        TERMO = 2 * TERMO + 1;
        SINAL *= -1;

        N++;
    } while (N <= 5);

    printf("A soma dos 5 primeiros termos da serie e: %.4f\n", SOMA);

    return 0;
}
