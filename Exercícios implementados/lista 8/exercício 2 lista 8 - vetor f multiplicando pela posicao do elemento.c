/* Dado o vetor F com 20 elementos inteiros, substituir cada elemento por ele mesmo multiplicado 
pela posição do elemento no conjunto.*/

#include<stdio.h>

int main()
{
    int F[20], I;
    for(I = 0; I < 20; I++)
    {
        printf("Digite o valor do elemento:\n");
        scanf("%d", &F[I]);
    }
    for(I = 0; I < 20; I++)
    {
        F[I] *= I;
        printf("elemento da posicao %d passou a ser\t%d\n", I, F[I]);
    }
    printf("\n");
    return 0;
}