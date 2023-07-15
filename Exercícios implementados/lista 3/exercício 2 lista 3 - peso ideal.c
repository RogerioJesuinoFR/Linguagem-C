/*Tendo como dados de entrada a altura e o sexo de uma pessoa (1- masculino e 0 - feminino),
construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7*h)-58
- para mulheres: (62.1*h)-44.7*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int  SEXO;
    float ALTURA, RES;
    printf("Digite sua altura em metros:\n");
    scanf("%f", &ALTURA);
    printf("Digite:\n1 - masculino\n0 - feminino\n");
    fflush(stdin);
    scanf("%d", &SEXO);
    if (SEXO > 1 || SEXO < 0)
    {
        printf("Opcao invalida!\n");
    }
    if (SEXO == 1)
    {
        RES = ALTURA * 72.7 - 58;
        printf("O Seu peso ideal e: %.1f kg\n\n", RES);
    }
    else if (SEXO == 0)
    {
        RES = 62.1 * ALTURA - 44.7;
        printf("O Seu peso ideal e: %.1f kg\n\n", RES);
    }

    system("pause");
    return 0;
}
