/* Fazer um programa em C que imprima os números perfeitos no intervalo de 1 a 1000*/

#include<stdio.h>

int main()
{
    int NUM = 1, DIV = 1, SOMA_DIV = 0;
    while(NUM <= 1000)
    {
        SOMA_DIV = 0;
        DIV = 1;
        while(DIV < NUM)
        {
            if(NUM % DIV == 0)
            {
                SOMA_DIV += DIV;
            }
            DIV++;
        }
        if (SOMA_DIV == NUM)
            printf("\t %d", NUM);

        NUM++;
    }
    
    printf("\n");
        
    return 0;
}