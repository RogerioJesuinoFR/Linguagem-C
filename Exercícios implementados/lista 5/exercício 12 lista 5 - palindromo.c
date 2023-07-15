/*Fazer um programa em C que seja capaz de ler um número inteiro positivo do teclado e de
verificar se a sua sequência dígitos é exatamente a mesma, tanto se for analisado da esquerda para
a direita quanto da direita para a esquerda. Caso seja, imprimir “ESSE NUMERO E
PALINDROMO!!!”. Caso não seja, imprimir “ESSE NUMERO NAO E PALINDROMO!!!”
OBSERVACÃO: utilize divisões e/ou multiplicações sucessivas por 10.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, ORIGINAL, INVERSO, DIGITO;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &NUM);

    ORIGINAL = NUM;
    INVERSO = 0;

    while (NUM > 0)
    {
        DIGITO = NUM % 10;
        INVERSO = INVERSO * 10 + DIGITO;
        NUM = NUM / 10;
    }

    if (ORIGINAL == INVERSO)
    {
        printf("ESSE NUMERO E PALINDROMO!!!\n");
    } else
    {
        printf("ESSE NUMERO NAO E PALINDROMO!!!\n");
    }

    return 0;
}
