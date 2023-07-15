/*Criar um programa para ler o preço e a categoria de um produto. Calcular o reajuste de acordo
com a categoria: se a mesma for A=50%, B=25%, C=15% e outras 5%. Depois mostre o valor
antigo, o percentual de reajuste e o valor reajustado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PRECO, RES;
    char CAT;
    printf("Informe o preco do produto:\n");
    scanf("%f", &PRECO);
    printf("Selecione a categoria do produto:\nA\nB\nC\nOutras\n");
    fflush(stdin);
    scanf("%c", &CAT);
    switch(CAT)
    {
        case 'A':
        case 'a':
            RES = (PRECO*150)/100;
            printf("O valor do produto era de %.2f, o percentual de reajuste foi de 50 por cento\ne o valor reajustado foi de %.2f\n", PRECO, RES);
            break;
        case 'B':
        case 'b':
            RES = (PRECO*125)/100;
            printf("O valor do produto era de %.2f, o percentual de reajuste foi de 25 por cento\ne o valor reajustado foi de %.2f\n", PRECO, RES);
            break;
        case 'C':
        case 'c':
            RES = (PRECO*115)/100;
            printf("O valor do produto era de %.2f, o percentual de reajuste foi de 15 por cento\ne o valor reajustado foi de %.2f\n", PRECO, RES);
            break;
        default:
            RES = (PRECO*105)/100;
            printf("O valor do produto era de %.2f, o percentual de reajuste foi de 5 por cento\ne o valor reajustado foi de %.2f\n", PRECO, RES);
            break;
    }
    system("pause");
    return 0;
}
