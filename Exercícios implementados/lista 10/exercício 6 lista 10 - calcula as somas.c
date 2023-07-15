/* Escreva um programa que lê uma matriz M[5,5] e calcula as somas:
a) da linha 4 de M;
b) da coluna 2 de M;
c) da diagonal principal;
d) da diagonal secundária;
e) de todos os elementos da matriz;
Escreva estas somas e a matriz.*/

#include<stdio.h>

int main()
{
    int MATRIZ_M[5][5], L, C, AUX_L = 0, AUX_C = 4, SOMA_LINHA_4 = 0, SOMA_COLUNA_2 = 0, SOMA_TOTAL =0, SOMA_DIG_PRINC = 0, SOMA_DIG_SEC = 0;
    for(L=0;L < 5;L++)
    {
        for(C=0;C < 5;C++)
        {
            printf("Digite o elemento [%d][%d]\n", L, C);
            scanf("%d", &MATRIZ_M[L][C]);
            SOMA_TOTAL += MATRIZ_M[L][C];
            if(L == 3)
                SOMA_LINHA_4 += MATRIZ_M[L][C];
            if(C == 1)
                SOMA_COLUNA_2 += MATRIZ_M[L][C];
            if(L == C)
                SOMA_DIG_PRINC += MATRIZ_M[L][C];
            if(L == AUX_L && C == AUX_C)
            {
               SOMA_DIG_SEC += MATRIZ_M[L][C];
                AUX_L++;
                AUX_C--;
            }
        }
    }

    printf("A soma dos elementos da linha 4 e: %d\n", SOMA_LINHA_4);
    printf("A soma dos elementos da coluna 2 e: %d\n", SOMA_COLUNA_2);
    printf("A soma dos elementos da diagonal principal e: %d\n", SOMA_DIG_PRINC);
    printf("A soma dos elementos da diagonal secundaria e: %d\n", SOMA_DIG_SEC);
    printf("A soma de todos os elementos da matriz e: %d\n", SOMA_TOTAL);
    return 0;
}
