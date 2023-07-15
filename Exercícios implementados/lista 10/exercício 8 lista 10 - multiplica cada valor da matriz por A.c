/* Escrever um programa que lê uma matriz M[6,6] e um valor A e multiplica a matriz M pelo valor
A e coloca os valores da matriz multiplicados por A em um vetor de V[36] e escreve no final o
vetor V*/

#include <stdio.h>

int main()
{
    int MATRIZ[6][6], VETOR[36], A, L, C, I;
    for(L=0;L < 6;L++)
    {
        for(C=0;C < 6;C++)
        {
            printf("Digite o elemento [%d][%d]\n", L, C);
            scanf("%d", &MATRIZ[L][C]);
        }
    }
    printf("Digite o valor A:\n");
    scanf("%d", &A);

    printf("O Vetor A e: [");

    for(L=0;L < 6;L++)
    {
        for(C=0;C < 6;C++)
        {
            VETOR[I] = (MATRIZ[L][C]*A);
            printf("%d", VETOR[I]);

            if(I < 35)
                printf(", ");
            I++;
        }
    }
    printf("]\n");

    return 0;
}
