/*Fa�a um programa que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero
� par ou �mpar, e se � positivo ou negativo.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NUM;
    printf("Digite um numero:\n");
    scanf("%d", &NUM);
    if(NUM % 2 == 0)
        printf("O numero e par");
    else
        printf("O numero e impar");
    if(NUM > 0)
        printf(" e positivo\n\n");
    else
        printf(" e negativo\n\n");
    system("pause");
    return 0;
}
