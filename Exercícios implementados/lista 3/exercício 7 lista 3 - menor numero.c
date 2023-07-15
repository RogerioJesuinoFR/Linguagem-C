/*Faça um algoritmo que leia 3 valores inteiros (X, Y, Z), determina e escreve o menor deles. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X, Y, Z;
    printf("Escreva tres numeros:\n");
    scanf("%d%d%d", &X, &Y, &Z);
    if ((X < Y)&&(X < Z))
        printf("O menor numero e %d\n", X);
    else if ((Y < X)&&(Y < Z))
        printf("O menor numero e %d\n", Y);
    else
        printf("O menor numero e %d\n", Z);
    system("pause");
    return 0;
}
