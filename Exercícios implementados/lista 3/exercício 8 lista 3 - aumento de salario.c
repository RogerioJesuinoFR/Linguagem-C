/*. A empresa Xing Ling SA decidiu conceder um aumento de salários a seus funcionários de acordo
com a tabela abaixo:
Salário Atual Índice De Aumento
0 – 1000,00 15%
1000,01 – 1500,00 12%
1500,01 – 1800,00 10%
1800,01 - 2000,00 7%
2000,01 – 2500,00 4%
acima de 2500,00 Sem aumento
Escrever um algoritmo que lê, para cada funcionário, o seu número e o seu salário atual e escreve o
número do funcionário, seu salário atual, o percentual de seu aumento e o valor do salário corrigido.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NUM, PERCENTUAL;
    float SALARIO, CORRECAO;
    CORRECAO = 0;
    PERCENTUAL = 0;
    printf("Informe o seu numero:\n");
    scanf("%d", &NUM);
    printf("Informe o seu salario atual:\n");
    scanf("%f", &SALARIO);
    if ((SALARIO >= 0)&&(SALARIO <= 1000))
    {
        PERCENTUAL = 15;
        CORRECAO = SALARIO + ((SALARIO*PERCENTUAL)/100);
    }
    else if ((SALARIO > 1000)&&(SALARIO <= 1500))
    {
        PERCENTUAL = 12;
        CORRECAO = SALARIO + ((SALARIO*PERCENTUAL)/100);
    }
    else if ((SALARIO > 1500)&&(SALARIO <= 1800))
    {
        PERCENTUAL = 10;
        CORRECAO = SALARIO + ((SALARIO*PERCENTUAL)/100);
    }
    else if ((SALARIO > 1800)&&(SALARIO <= 2000))
    {
        PERCENTUAL = 7;
        CORRECAO = SALARIO + ((SALARIO*PERCENTUAL)/100);
    }
    else if ((SALARIO > 2000)&&(SALARIO <= 2500))
    {
        PERCENTUAL = 4;
        CORRECAO = SALARIO + ((SALARIO*PERCENTUAL)/100);
    }
    else
    {
        PERCENTUAL = 0;
        CORRECAO = SALARIO + ((SALARIO*PERCENTUAL)/100);
    }
    printf("O seu numero e %d, seu salario atual e R$%.2f, teve um aumento de %d por cento e agora seu salario e R$%.2f\n\n", NUM, SALARIO, PERCENTUAL, CORRECAO);
    system("pause");
    return 0;
}
