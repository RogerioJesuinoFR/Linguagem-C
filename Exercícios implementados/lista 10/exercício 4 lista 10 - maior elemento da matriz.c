/* Encontrar o maior elemento e a sua respectiva posição de uma matriz B de dimensão 7x5.*/

#include<stdio.h>

int main()
{
    int MATRIZ_B[7][5], L, C, POSICAO = 0, MAIOR = 0;
    for(L=0;L < 7;L++)
    {
        for(C=0;C < 5;C++)
        {
            printf("Digite o elemento [%d][%d]\n", L, C);
            scanf("%d", &MATRIZ_B[L][C]);
            if(MATRIZ_B[L][C] > MAIOR)
            {
                MAIOR = MATRIZ_B[L][C];
                POSICAO = L * 10+C;
            }
        }
    }
    printf("O maior elemento e %d e esta na posicao %d", MAIOR, POSICAO);
    return 0;
}
