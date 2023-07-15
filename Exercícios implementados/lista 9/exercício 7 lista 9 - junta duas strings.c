/* Faça um programa que una duas strings (sem usar a função strcat).*/

#include<stdio.h>

int ENCONTRAR_TAM_STRING(char STRING[100])
{
    int I, CONT=0;
    for(I = 0; I < 100; I++)
    {
        if(STRING[I]!= '\0')
            CONT++;
        else
            break;
    }
    return CONT;
}

void UNIR_STRING(char STRING1[100], char STRING2[100], char STR_RES[200])
{
    int TAM1, TAM2;
    TAM1 = ENCONTRAR_TAM_STRING(STRING1);
    TAM2 = ENCONTRAR_TAM_STRING(STRING2);
    int I, J;

    for (I = 0; I < TAM1; I++)
    {
        STR_RES[I] = STRING1[I];
    }

    for (J = 0; J < TAM2; J++)
    {
        STR_RES[TAM1 + J] = STRING2[J];
    }

    STR_RES[TAM1 + TAM2] = '\0';
}

int main()
{
    char STR1[100], STR2[100], STR_RES[200];

    printf("Digite uma string:\n");
    gets(STR1);

    printf("Digite outra string:\n");
    gets(STR2);

    UNIR_STRING(STR1, STR2, STR_RES);
    printf("Resultado da uniao: %s\n", STR_RES);

    return 0;
}
