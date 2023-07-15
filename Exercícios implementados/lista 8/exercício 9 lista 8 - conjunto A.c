/* Sendo dado um conjunto A de 10 números inteiros, determinar 2 outros conjuntos, contendo o 
primeiro conjunto os números negativos de A e o segundo conjunto os números que são múltiplos 
de um número inteiro X. Observação: Considerar que existam pelo menos um múltiplo e um 
negativo.*/

#include <stdio.h>

int main() 
{
    int A[10], CONJ_NEG[10], CONJ_MULT_X[10], X = 0, Y, I;
    printf("Digite os valores do conjunto A:\n");

    for (I = 0; I < 10; I++) 
    {
        scanf("%d", &A[I]);
    }

    printf("Informe o numero X:\n");
    scanf("%d", &X);

    for (I = 0; I < 10; I++) 
    {
        if (A[I] < 0)
            CONJ_NEG[I] = A[I];
        else
            CONJ_NEG[I] = 0;

        CONJ_MULT_X[I] = 0;

        for (Y = 1; Y <= X; Y++) 
        {
            if (A[I] * Y == X)
                CONJ_MULT_X[I] = A[I];
        }
    }

    printf("O conjunto de numeros negativos e:\n");
    for (I = 0; I < 10; I++) 
    {
        if (CONJ_NEG[I] != 0)
            printf("%d ", CONJ_NEG[I]);
    }

    printf("\nO conjunto dos numeros multiplos de %d e:\n", X);
    for (I = 0; I < 10; I++) 
    {
        if (CONJ_MULT_X[I] != 0)
            printf("%d ", CONJ_MULT_X[I]);
    }

    return 0;
}
