/* Dado um vetor N contendo 15 valores positivos digitados por você, separa num vetor P os valores 
pares e num vetor I os valores impares. Depois mostre somente os valores pares e impares em 
seus respectivos vetores. Utilize procedimento.*/

#include<stdio.h>

void PROCED_PARES(int N[], int P[], int TAMANHO)
{
    int C;
    for(C = 0; C < TAMANHO; C++)
    {
        if(N[C] % 2 == 0)
            P[C] = N[C];
    }
    printf("os valores pares sao: \n");
    for(C = 0; C < TAMANHO; C++)
    {
        if (P[C] != 0)
            printf("%d\t", P[C]);
    }
    printf("\n");
}

void PROCED_IMPARES(int N[], int I[], int TAMANHO)
{
    int C;
    for(C = 0; C < TAMANHO; C++)
    {
        if(N[C] % 2 != 0)
        I[C] = N[C];
    }
    printf("os valores impares sao: \n");
    for(C = 0; C < TAMANHO; C++)
    {
        if (I[C] != 0)
            printf("%d\t", I[C]);
    }
    printf("\n");
}

int main()
{
    int N[15], P[15] = {0}, I[15] = {0}, CONT;
    for(CONT = 0; CONT < 15; CONT++)
    {
        printf("Digite um valor positivo:\n");
        scanf("%d", &N[CONT]);
    }
    PROCED_PARES(N, P, 15);
    PROCED_IMPARES(N, I, 15);

    return 0;
}