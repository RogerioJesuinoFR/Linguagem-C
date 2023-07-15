/* Fazer um programa que calcule e escreva a soma dos 30 primeiros termos da série:*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int I = 0, NUM = 480, DIV = 10;
    double SOMA = 0, RES = 0;
    while(I < 30)
    {
        if (DIV % 2 == 0)
        {
            RES = (double) NUM / DIV;
            SOMA += RES;
        }
        else
        {
            RES = (double) NUM / DIV;
            SOMA -= RES;
        }
        NUM -= 5;
        DIV++;
        I++;
    }
    printf("O resultado da soma dos 30 primeiros termos foi %.2f\n", SOMA);
    system("pause");
    return 0;
}