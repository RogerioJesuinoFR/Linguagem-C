/*Desenvolva um programa para fazer a conversao de Real para Dolar e vice e versa. Para isso o
usuario devera informar o valor em uma moeda a cotacao e fazer a sua conversao. Apresente o
valor convertido. Para realizar as conversoes utilize funcoes especificas.*/

#include<stdio.h>
#include<stdlib.h>

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
            printf("O valor convertido e:\n%.2f reais", CONVERTER_PARA_REAL(VALOR, COTACAO));
            break;
        case 'D':
        case 'd':
            printf("O valor convertido e:\n%.2f dolares", CONVERTER_PARA_DOLAR(VALOR, COTACAO));
            break;
        default:
            printf("Opcao invalida!\n");
    }
    system("pause");
    return 0;
}
