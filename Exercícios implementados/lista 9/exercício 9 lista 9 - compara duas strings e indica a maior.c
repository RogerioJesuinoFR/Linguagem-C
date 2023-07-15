/* Faça um programa que dado 2 palavras, determine:
a) Se as palavras são iguais;
b) Caso as palavras sejam diferentes, qual delas tem maior comprimento (não esquecer a
possibilidade de existirem palavras diferentes de mesmo tamanho);*/

#include<stdio.h>
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

int ENCONTRAR_MAIOR(int TAM1, int TAM2)
{
    if(TAM1 > TAM2)
        printf(" e a String 1 e maior que a String 2\n");
    else if(TAM1 < TAM2)
        printf(" e a String 2 e maior que a String 1\n");
    else if(TAM1 == TAM2)
        printf(" e as duas strings tem o mesmo tamanho\n");
}

void COMPARAR_STRING(char STRING1[TAM_MAXIMO], char STRING2[TAM_MAXIMO], int TAM1, int TAM2)
{
    int I, IGUAL = 0;
    if(TAM1 == TAM2)
    {
        for(I = 0; I < TAM1; I++)
        {
            if(STRING1[I] != STRING2[I])
                IGUAL = 1;
        }
        if(IGUAL == 0)
        {
            printf("Strings iguais");
            ENCONTRAR_MAIOR(TAM1, TAM2);
        }
        else
        {
            printf("Strings diferentes");
            ENCONTRAR_MAIOR(TAM1, TAM2);
        }

    }
    else
    {
        printf("Strings Diferentes");
        ENCONTRAR_MAIOR(TAM1, TAM2);
    }
}



int main()
{
    char STR1[TAM_MAXIMO], STR2[TAM_MAXIMO];
    int TAM1, TAM2;
    printf("Digite uma string:\n");
    fflush(stdin);
    gets(STR1);
    printf("Digite outra string:\n");
    fflush(stdin);
    gets(STR2);
    TAM1 = ENCONTRAR_TAM_STRING(STR1);
    TAM2 = ENCONTRAR_TAM_STRING(STR2);
    COMPARAR_STRING(STR1, STR2, TAM1, TAM2);
    return 0;
    return 0;
}
