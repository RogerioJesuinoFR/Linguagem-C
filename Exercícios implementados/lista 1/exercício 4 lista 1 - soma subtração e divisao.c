/* Faça um programa que leia dois números reais e em seguida mostre: a soma, o produto, a divisão e a
subtração entre eles.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float NUM1, NUM2, SOMA, SUBTRACAO, PRODUTO, DIVISAO;
    printf("Digite um numero: \n");
    scanf("%f", &NUM1);
    printf("Digite outro numero: \n");
    scanf("%f", &NUM2);
    SOMA = NUM1 + NUM2;
    SUBTRACAO = NUM1 - NUM2;
    PRODUTO = NUM1 * NUM2;
    DIVISAO = NUM1/NUM2;
    printf("A soma e: %.1f\n", SOMA);
    printf("A subtracao e: %.1f\n", SUBTRACAO);
    printf("O produto e: %.1f\n", PRODUTO);
    printf("A divisao e: %.2f\n", DIVISAO);
    system("pause");
    return 0;
}
