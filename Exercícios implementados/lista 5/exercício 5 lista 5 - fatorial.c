/*Escreva um programa que realize o c�lculo do fatorial de um n�mero inteiro e positivo informado
pelo usu�rio.*/

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
