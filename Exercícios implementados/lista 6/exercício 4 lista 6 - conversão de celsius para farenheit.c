/*A conversão de graus Farenheit para centígrados é obtida por
C= 5/9 * (F - 32)
Fazer um programa que calcule e escreva uma tabela de centígrados em função de graus Farenheit,
que variam de 50 a 150 de 1 em 1.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int F = 50;
    float C = 0;
    while(F <= 150)
    {
        C = (float) 5/9 * (F - 32);
        printf("\t%.1f C", C);
        F++;
    }
    printf("\n");
    system("pause");
    return 0;
}
