/* Faça um programa que compare duas strings (sem usar a função strcmp).*/

#include <stdio.h>
#define TAM_MAXIMO 20

int ENCONTRAR_TAM_STRING(char STRING[TAM_MAXIMO])
{
    int I, CONT=0;
    for(I = 0; I < TAM_MAXIMO; I++)
    {
        if(STRING[I]!= '\0')
            CONT++;
        else
            break;
    }
    return CONT;
}

void COMPARAR_STRING(char STRING1[TAM_MAXIMO], char STRING2[TAM_MAXIMO])
{
    int I, IGUAL = 0, TAM1, TAM2;
    TAM1 = ENCONTRAR_TAM_STRING(STRING1);
    TAM2 = ENCONTRAR_TAM_STRING(STRING2);
    if(TAM1 == TAM2)
    {
        for(I = 0; I < TAM1; I++)
        {
            if(STRING1[I] != STRING2[I])
                IGUAL = 1;
        }
        if(IGUAL == 0)
            printf("Strings iguais!\n");
        else
            printf("Strings diferentes!\n");
    }
    else
        printf("Strings Diferentes!");
}

int main()
{
    char STR1[TAM_MAXIMO], STR2[TAM_MAXIMO];
    printf("Digite uma string:\n");
    fflush(stdin);
    gets(STR1);
    printf("Digite outra string:\n");
    fflush(stdin);
    gets(STR2);
    COMPARAR_STRING(STR1, STR2);
    return 0;
}
