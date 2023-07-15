/* Encontrar o maior elemento e a sua respectiva posição de um vetor A com 15 elementos*/

#include<stdio.h>

int main()
{
    int I, POS_MAIOR;
    float MAIOR_ELEM = 0, A[15];
    for(I = 0; I < 15; I++)
    {
        printf("Informe o valor:\n");
        scanf("%f", &A[I]);
    }
    for(I = 0; I < 15; I++)
    {
        if(A[I] >= MAIOR_ELEM)
        {
            MAIOR_ELEM = A[I];
            POS_MAIOR = I;
        }
    }
    printf("O maior elemento e %.1f e esta na posicao %d\n", MAIOR_ELEM, POS_MAIOR);
    return 0;
}