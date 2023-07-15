/* Escreva um programa que verifique a identidade de duas matrizes de mesma ordem.*/

#include <stdio.h>
#define TAM 3

int VERIFICA_IDENTIDADE(int MATRIZ1[TAM][TAM], int MATRIZ2[TAM][TAM])
{
    int I, J;

    for (I = 0; I < TAM; I++)
    {
        for (J = 0; J < TAM; J++)
        {
            if (MATRIZ1[I][J] != MATRIZ2[I][J])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int MATRIZ1[TAM][TAM];
    int MATRIZ2[TAM][TAM];
    int I, J;

    printf("Digite os elementos da primeira matriz:\n");
    for (I = 0; I < TAM; I++)
    {
        for (J = 0; J < TAM; J++)
        {
            printf("Digite o elemento [%d][%d]:\n", I, J);
            scanf("%d", &MATRIZ1[I][J]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (I = 0; I < TAM; I++)
    {
        for (J = 0; J < TAM; J++)
        {
            printf("Digite o elemento [%d][%d]:\n", I, J);
            scanf("%d", &MATRIZ2[I][J]);
        }
    }

    int IDENTIDADE = VERIFICA_IDENTIDADE(MATRIZ1, MATRIZ2);

    if (IDENTIDADE)
    {
        printf("As matrizes sao identicas.\n");
    }
    else
    {
        printf("As matrizes nao sao identicas.\n");
    }

    return 0;
}
