/*Escrever um procedimento que, tem como parâmetros de entrada um valor em reais. Este
procedimento calcula qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o valor
lido pode ser decomposto. Tal procedimento deve apresentar o valor lido e a relação de notas
necessárias.*/

#include<stdio.h>
#include<stdlib.h>

void DECOMPOR_EM_NOTAS(int VALOR)
{
    printf("Valor lido: R$ %d\n", VALOR);
    int NOTAS_100 = VALOR / 100;
    VALOR = VALOR % 100;

    int NOTAS_50 = VALOR / 50;
    VALOR = VALOR % 50;

    int NOTAS_10 = VALOR / 10;
    VALOR = VALOR % 10;

    int NOTAS_5 = VALOR / 5;
    VALOR = VALOR % 5;

    int NOTAS_1 = VALOR;

    printf("Notas de 100: %d\n", NOTAS_100);
    printf("Notas de 50: %d\n", NOTAS_50);
    printf("Notas de 10: %d\n", NOTAS_10);
    printf("Notas de 5: %d\n", NOTAS_5);
    printf("Notas de 1: %d\n", NOTAS_1);
}

int main()
{
    int VALOR;
    printf("Informe o valor em reais:\n");
    scanf("%d", &VALOR);
    DECOMPOR_EM_NOTAS(VALOR);
    system("pause");
    return 0;
}
