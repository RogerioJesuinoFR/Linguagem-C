/*A convers�o de graus Farenheit para cent�grados � obtida por
C= 5/9 * (F - 32)
Fazer um programa que calcule e escreva uma tabela de cent�grados em fun��o de graus Farenheit,
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
