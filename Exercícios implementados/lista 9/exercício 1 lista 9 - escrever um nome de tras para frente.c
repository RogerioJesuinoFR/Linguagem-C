/* Receber um nome do teclado e imprimi-lo de trás para a frente*/

#include <stdio.h>
#include <string.h>
#define TAM_MAXIMO 100

int ENCONTRAR_TAM_STRING(char NOME[TAM_MAXIMO])
{
    int I, CONT=0;
    for(I = 0; I<TAM_MAXIMO; I++)
    {
        if(NOME[I]!='\0')
            CONT++;
        else
            break;
    }
    return CONT;
}

int main()
{
    char NOME[TAM_MAXIMO];
    int TAM, I;

    printf("Digite um nome:\n");
    fflush(stdin);
    gets(NOME);
    TAM = ENCONTRAR_TAM_STRING(NOME);
    if(NOME[TAM_MAXIMO] <= TAM_MAXIMO)
    {
        printf("Nome invertido: ");
        for (I = TAM - 1; I >= 0; I--)
        {
            printf("%c", NOME[I]);
        }
        printf("\n");
    }
    else
        printf("Nome ultrapassou o limite de caracteres\n");

    return 0;
}
