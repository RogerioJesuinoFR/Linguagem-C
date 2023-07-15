/* Faça um programa que preenche uma matriz 10x10 com o produto dos índices de cada posição. */

#include<stdio.h>

int main()
{
    int MATRIZ[10][10], L = 0, C = 0, AUX_L = 0, AUX_C = 0;

    for(L=0, AUX_L = 0;L < 10, AUX_L < 10;L++, AUX_L++)
    {
        printf("| ");
        for(C=0, AUX_C=0;C < 10, AUX_C < 10;C++, AUX_C++)
        {
            MATRIZ[AUX_L][AUX_C] = L*C;
            if((L < 2 && C > 1)||(L == 2 && C > 1 && C < 5)||(L == 4 && C == 2)||(L == 3 && C > 1 && C < 4))
                printf("%d  ", MATRIZ[AUX_L][AUX_C]);
            else
                printf("%d ", MATRIZ[AUX_L][AUX_C]);
        }
        printf("|\n");
    }
    return 0;
}
