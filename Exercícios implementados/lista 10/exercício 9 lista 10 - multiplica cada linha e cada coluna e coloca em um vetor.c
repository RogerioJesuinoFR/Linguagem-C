/* Escrever um programa que lê uma matriz M[5,5] e cria 2 vetores SL[5], SC[5] que contenham
respectivamente as somas das linhas e das colunas de M. Escrever a matriz e os vetores criados*/

#include <stdio.h>

int main()
{
    int MATRIZ_M[5][5], SL[5], SC[5], L, C;

    // Leitura da matriz M
    for (L = 0; L < 5; L++)
    {
        for (C = 0; C < 5; C++)
        {
            printf("Digite o elemento [%d][%d]:\n", L, C);
            scanf("%d", &MATRIZ_M[L][C]);
        }
    }

    // Cálculo das somas das linhas e preenchimento do vetor SL
    for (L = 0; L < 5; L++)
    {
        SL[L] = 0;

        for (C = 0; C < 5; C++)
        {
            SL[L] += MATRIZ_M[L][C];
        }
    }

    // Cálculo das somas das colunas e preenchimento do vetor SC
    for (C = 0; C < 5; C++)
    {
        SC[C] = 0;

        for (L = 0; L < 5; L++)
        {
            SC[C] += MATRIZ_M[L][C];
        }
    }

    // Impressão da matriz e dos vetores SL e SC
    printf("Matriz M:\n");
    for (L = 0; L < 5; L++)
    {
        for (C = 0; C < 5; C++)
        {
            printf("%d\t", MATRIZ_M[L][C]);
        }
        printf("\n");
    }

    printf("Vetor SL: [");
    for (L = 0; L < 5; L++)
    {
        printf("%d", SL[L]);

        if (L < 4)
            printf(", ");
    }
    printf("]\n");

    printf("Vetor SC: [");
    for (C = 0; C < 5; C++)
    {
        printf("%d", SC[C]);

        if (C < 4)
            printf(", ");
    }
    printf("]\n");

    return 0;
}

