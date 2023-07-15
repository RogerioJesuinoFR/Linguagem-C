/* Dada uma matriz quadrada de ordem 5, separar os elementos da diagonal secundária em um
vetor.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int L, C, AUX_L = 0, AUX_C = 4, I = 0;
    float ELEMENTO[5][5], DIAGONAL_SECUNDARIA[5];
    for(L=0;L < 5;L++)
    {
        for(C=0;C < 5;C++)
        {
            printf("Digite o elemento [%d][%d]\n", L, C);
            scanf("%f", &ELEMENTO[L][C]);
            if(L == AUX_L && C == AUX_C)
            {
               DIAGONAL_SECUNDARIA[I] = ELEMENTO[L][C];
                AUX_L++;
                AUX_C--;
                I++;
            }
        }
    }
    printf("A Diagonal secundaria e: [");
    for(I=0;I < 5; I++)
    {
        printf("%.1f", DIAGONAL_SECUNDARIA[I]);
        if(I < 4)
            printf(", ");
    }
    printf("]\n");
    system("pause");
    return 0;
}
