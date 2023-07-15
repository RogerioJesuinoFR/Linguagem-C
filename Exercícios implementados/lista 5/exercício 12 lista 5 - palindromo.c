/*Fazer um programa em C que seja capaz de ler um n�mero inteiro positivo do teclado e de
verificar se a sua sequ�ncia d�gitos � exatamente a mesma, tanto se for analisado da esquerda para
a direita quanto da direita para a esquerda. Caso seja, imprimir �ESSE NUMERO E
PALINDROMO!!!�. Caso n�o seja, imprimir �ESSE NUMERO NAO E PALINDROMO!!!�
OBSERVAC�O: utilize divis�es e/ou multiplica��es sucessivas por 10.*/

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
