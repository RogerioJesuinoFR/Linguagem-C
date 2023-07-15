/*Fazer um programa em C que leia um n�mero inteiro e positivo e verifique se esse n�mero �
primo ou n�o � primo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, DIV;
    DIV = 2;

    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &NUM);

    if (NUM <= 1) {
        printf("O numero nao e primo.\n");
        return 0;
    }

    while (DIV < NUM) {
        if (NUM % DIV == 0) {
            printf("O numero nao e primo.\n");
            return 0;
        }
        DIV++;
    }

    printf("O numero e primo.\n");
    system("pause");
    return 0;
}
