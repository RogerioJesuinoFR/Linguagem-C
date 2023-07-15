/*Escreva um programa que realize o cálculo do fatorial de um número inteiro e positivo informado
pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, RES;
    RES = 1;
    printf("Digite um numero:\n");
    scanf("%d", &NUM);
    while (NUM > 0)
    {
        RES *= NUM;
        NUM--;
    }
    printf("O Fatorial desse numero e: %d\n", RES);
    system("pause");
    return 0;
}
