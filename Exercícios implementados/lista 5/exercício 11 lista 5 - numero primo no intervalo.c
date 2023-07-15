/*Fazer um programa em C para calcular e imprimir todos os números primos entre 1 e 100.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, DIV, I;
    NUM = 2;
    printf("Números primos entre 1 e 100:\n");
    while (NUM <= 100)
    {
        DIV = 0;
        I = 2;

        while (I <= NUM / 2)
        {
            if (NUM % I == 0)
            {
                DIV++;
                break;
            }
            I++;
        }

        if (DIV == 0)
        {
            printf("%d ", NUM);
        }

        NUM++;
    }

    printf("\n");

    return 0;
}
