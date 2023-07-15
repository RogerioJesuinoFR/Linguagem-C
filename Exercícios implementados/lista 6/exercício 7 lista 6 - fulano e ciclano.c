/* Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce 
3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão 
necessários para que Ciclano seja maior que Fulano.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int FULANO = 150, CICLANO = 110, ANOS = 1;
    while(CICLANO < FULANO)
    {
        FULANO += 2;
        CICLANO += 3;
        ANOS ++;
    }
    printf("Serao necessarios %d anos para que Ciclano seja maior que Fulano\n", ANOS);
    system("pause");
    return 0;
}