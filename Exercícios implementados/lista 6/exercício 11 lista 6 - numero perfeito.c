/* Fazer um programa em C que verifique se um número é perfeito ou não.*/

#include<stdio.h>

int main()
{
    int NUM, DIV = 1, SOMA_DIV = 0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &NUM);
    while(SOMA_DIV < NUM)
    {
        if(NUM % DIV == 0)
        {
            SOMA_DIV += DIV;
        }
        DIV++;
    }
    if (SOMA_DIV == NUM)
        printf("O numero %d e perfeito\n", NUM);
    else
        printf("O numero %d nao e perfeito\n", NUM);
        
    return 0;
}