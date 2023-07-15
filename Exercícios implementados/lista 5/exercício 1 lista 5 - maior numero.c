/*Escrever um programa que leia 8 valores inteiro positivo, um de cada vez, e encontre e escreve o
maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CONT, VALOR, MAIOR_VALOR;
    CONT = 0;
    MAIOR_VALOR = 0;
    printf("Digite 8 valores inteiros positivos:\n");
    while (CONT < 8)
    {
        scanf("%d", &VALOR);
        if(VALOR > 0)
        {
            if (VALOR > MAIOR_VALOR)
                MAIOR_VALOR = VALOR;
            CONT++;
        }
        else
            printf("Digite um valor inteiro positivo:\n");
    }

    printf("O maior valor e:\n %d\n\n", MAIOR_VALOR);
    system("pause");
    return 0;
}
