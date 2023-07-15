/*. Faça um algoritmo que leia um número que represente um determinado mês do ano. Após a
leitura escreva por extenso qual o mês lido. Caso o número digitado não esteja na faixa de 1 ao12
escreva uma mensagem informando o usuário do erro da digitação. Depois de ser confirmado o
mês deverá ser pedido o dia e o ano onde será aceito apenas quantos dias o mês possui (Ex:
fevereiro possui 28 dias). Escrever a data informada por extenso (18/04/2023 – 18 de abril de
2023).*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MES, DIA, ANO;
    printf("Informe o numero do mes:\n");
    scanf("%d", &MES);
    if (MES == 1)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=31)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de Janeiro de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 2)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=28)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de fevereiro de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 3)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=31)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de marco de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 4)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=30)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de abril de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 5)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=31)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de maio de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 6)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=30)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de junho de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 7)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=31)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de julho de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 8)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=31)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de agosto de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 9)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=30)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de setembro de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 10)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=31)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de outubro de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 11)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=30)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de novembro de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else if (MES == 12)
    {
        printf("Informe o dia e o ano:\n");
        scanf("%d", &DIA);
        if ((DIA <=31)&&(DIA >= 1))
        {
            scanf("%d", &ANO);
            printf("%d de dezembro de %d\n", DIA, ANO);
        }
        else
            printf("Dado invalido!\n");
    }
    else
        printf("Erro na digitacao!\n");
    system("pause");
    return 0;
}
