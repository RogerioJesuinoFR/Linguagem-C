/* Faça um programa que leia 10 números inteiros positivos, calcule e escreva os que são números 
perfeitos. Sendo que, um número perfeito é aquele cuja soma de seus divisores, exceto ele 
próprio, é igual ao número.*/

#include<stdio.h>

int main()
{
    int I = 0, NUM, DIV, SOMA_DIV;
    do
    {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &NUM);

        DIV = 1;
        SOMA_DIV = 0;

        while(DIV < NUM)
        {
            if(NUM % DIV == 0)
            {
                SOMA_DIV += DIV;
            }
            DIV++;
        }

        if (SOMA_DIV == NUM)
            printf("%d e um numero perfeito.\n\n", NUM);

        I++; 
    } while (I < 10);
    
    return 0;
}