/* Faça um programa que leia um número inteiro e calcule e escreva a tabuada deste número 
(usando estrutura de repetição).*/

#include<stdio.h>

int main()
{
    int NUM, MULT = 1, RES = 0;
    printf("Escreva um numero inteiro:\n");
    scanf("%d", &NUM);
    do
    {
        RES = NUM * MULT;
        printf("%d X %d = %d\n", NUM, MULT, RES);
        MULT++;
    } while (MULT <= 10);
    
    return 0;
}