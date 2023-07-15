/* Dada uma matriz A (3 x 4) imprimir o número de linhas e o número de colunas nulas da matriz.
Exemplo:
0 0 0 0
1 0 2 2
0 0 0 0
Tem duas linhas nulas e uma coluna nulas*/

#include<stdio.h>

int main()
{
    int MATRIZ_A[3][4], L, C, I = 0, J = 0, LINHAS_NULAS = 0,COLUNAS_NULAS = 0, LINHA_NULA, COLUNA_NULA;
    for (L = 0; L < 3; L++)
    {
        for (C = 0; C < 4; C++)
        {
            printf("Digite o elemento [%d][%d]:\n", L, C);
            scanf("%d", &MATRIZ_A[L][C]);
        }
    }

    for (L = 0; L < 3; L++)
    {
        LINHA_NULA = 1;

        for (C = 0; C < 4; C++)
        {
            if(MATRIZ_A[L][C] != 0)
            {
                LINHA_NULA = 0;
                break;
            }
        }
        if(LINHA_NULA)
            LINHAS_NULAS++;
    }

    for (C = 0; C < 4; C++)
    {
        COLUNA_NULA = 1;

        for (L = 0; L < 3; L++)
        {
            if(MATRIZ_A[L][C] != 0)
            {
                COLUNA_NULA = 0;
                break;
            }
        }
        if(COLUNA_NULA)
            COLUNAS_NULAS++;
    }

    printf("O Numero de linhas nulas e %d\n", LINHAS_NULAS);
    printf("O NUmero de colunas nulas e %d\n", COLUNAS_NULAS);
    return 0;
}
