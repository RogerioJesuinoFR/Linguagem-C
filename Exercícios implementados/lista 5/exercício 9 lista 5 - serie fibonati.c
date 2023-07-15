/*Escreva um programa que calcule e apresente a série de fibonacci. A quantidade de termos a
serem apresentados devem ser informados pelo usuário. Apresente também a somatória de todos
os termos exibidos pela série de fibonacci solicitada.
Série de Fibonacci = “1, 1, 2, 3, 5, 8, 13, 21, 34, 55”*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int QUANT, TERMO1, TERMO2, SOMA, CONT, PROX_TERMO;
    printf("Digite a quantidade de termos da serie de Fibonacci: ");
    scanf("%d", &QUANT);

    TERMO1 = 1;
    TERMO2 = 1;
    SOMA = TERMO1 + TERMO2;

    printf("Serie de Fibonacci: %d, %d", TERMO1, TERMO2);

    CONT = 2;
    while (CONT < QUANT) {
        PROX_TERMO = TERMO1 + TERMO2;
        printf(", %d", PROX_TERMO);
        SOMA += PROX_TERMO;

        TERMO1 = TERMO2;
        TERMO2 = PROX_TERMO;

        CONT++;
    }

    printf("\nSomatoria dos termos: %d\n", SOMA);
    system("pause");
    return 0;
}
