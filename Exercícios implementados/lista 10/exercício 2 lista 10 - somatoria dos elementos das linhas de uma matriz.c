/* Achar a somatória de cada uma das linhas de uma matriz A (7x5).*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int L, C, K;
    float A[7][5], SOMATORIA[7] = {0};
    for(L=0;L < 7;L++)
    {
        for(C=0;C < 5;C++)
        {
            printf("Digite o elemento [%d][%d]\n", L, C);
            scanf("%f", &A[L][C]);
                SOMATORIA[L] += A[L][C];
        }
    }
    printf("Resultado das somatorias:\n");
    for(K=0;K < 7; K++)
    {
        printf("linha %d e:%.1f\n", K, SOMATORIA[K]);
    }
    system("pause");
    return 0;
}
