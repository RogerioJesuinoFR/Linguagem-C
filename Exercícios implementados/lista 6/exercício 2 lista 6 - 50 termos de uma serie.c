/*Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série:
S= 1000/1 – 997/2 + 994/3 -991/4 ...*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int I = 1, NUM = 1000, DIV = 1;
    double SOMA, RES = 0.00;
    while(I <= 50)
    {
        if (NUM % 2 == 0.00)
        {
            RES = (double) NUM / DIV;
            SOMA += RES;
        }
        else
        {
            RES = (double) NUM / DIV;
            SOMA -= RES;
        }
        NUM = NUM - 3;
        DIV++;
        I++;
    }
    printf("A soma dos 50 primeiros termos e %.2f\n", SOMA);
    system("pause");
    return 0;
}
