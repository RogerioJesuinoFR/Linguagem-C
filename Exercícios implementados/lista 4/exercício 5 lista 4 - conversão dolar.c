/*Desenvolva um programa para fazer a conversão de Real para Dólar e vice e versa. Para isso o
usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão. Apresente o
valor convertido. */

#include <stdio.h>
#include <stdlib.h>

float CONVERTER_PARA_REAL(float VALOR, float COTACAO)
{
    float RES;
    RES = VALOR * COTACAO;
    return RES;
}

float CONVERTER_PARA_DOLAR(float VALOR, float COTACAO)
{
    float RES;
    RES = VALOR / COTACAO;
    return RES;
}

int main()
{
    float VALOR, COTACAO;
    char MOEDA;
    printf("Informe o Valor:\n");
    scanf("%f", &VALOR);
    printf("Escolha a moeda para qual deseja converter:\n\nR - real\nD - dolar\n\n");
    fflush(stdin);
    scanf("%c", &MOEDA);
    printf("informe o valor para cotacao:\n");
    scanf("%f", &COTACAO);
    switch(MOEDA)
    {
        case 'R':
        case 'r':
            printf("O valor convertido e:\n%.2f reais\n", CONVERTER_PARA_REAL(VALOR, COTACAO));
            break;
        case 'D':
        case 'd':
            printf("O valor convertido e:\n%.2f dolares\n", CONVERTER_PARA_DOLAR(VALOR, COTACAO));
            break;
        default:
            printf("Opcao invalida!\n");
    }
    system("pause");
    return 0;
}
