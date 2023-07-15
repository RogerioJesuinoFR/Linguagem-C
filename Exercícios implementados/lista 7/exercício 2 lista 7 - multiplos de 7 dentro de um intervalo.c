/* Faça um programa em C que escreve os números múltiplos de 7 entre 100 e 200, bem como a 
soma destes números.*/

#include<stdio.h>

int main()
{
    int MULT = 100, RES = 0;
    do
    {
        if(MULT % 7 == 0)
        {
            RES = MULT;
        }
        MULT++;
    } while (MULT <= 200);

    printf("\t%d", RES);
    return 0;
}