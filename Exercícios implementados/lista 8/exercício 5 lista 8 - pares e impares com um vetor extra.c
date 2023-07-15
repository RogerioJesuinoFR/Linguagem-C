/* Dado um conjunto N contendo 15 valores positivos, separar os elementos pares dos impares, 
usando apenas um vetor extra. Observação: Existiam elementos pares e impares no conjunto.*/

#include<stdio.h>

void VERIFICACAO(int N[], int P[], int TAMANHO)
{
    int C, I = 0;
    for(C = 0; C < TAMANHO; C++)
    {
        if(N[C] % 2 == 0)
            P[C] = N[C];
        else
        {
            if(I < 1)
            {
                printf("Os valores impares sao:\n");
                I++;
            }
            printf("%d\t", N[C]);
        }
    }
    printf("\n\n");
    printf("Os valores pares sao: \n");
    for(C = 0; C < TAMANHO; C++)
    {
        if (P[C] != 0)
            printf("%d\t", P[C]);
    }
    printf("\n");
}

int main()
{
    int N[15], P[15] = {0}, CONT;
    for(CONT = 0; CONT < 15; CONT++)
    {
        printf("Digite um valor positivo:\n");
        scanf("%d", &N[CONT]);
    }
    VERIFICACAO(N, P, 15);

    return 0;
}