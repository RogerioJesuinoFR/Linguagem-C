/* Solicitar no teclado uma frase com no máximo 40 letras. Se o tamanho for maior que 40, dar uma
mensagem de entrada inválida e solicitar novamente, se passar, imprimir a frase na vertical.*/

#include<stdio.h>
#define TAM_MAXIMO 40

int ENCONTRAR_TAM_STRING(char FRASE[TAM_MAXIMO])
{
    int I, CONT=0;
    for(I = 0; I < TAM_MAXIMO; I++)
    {
        if(FRASE[I]!= '\0')
            CONT++;
        else
            break;
    }
    return CONT;
}

int main()
{
    char FRASE[TAM_MAXIMO];
    int I, TAM;
    do
    {
        printf("Digite uma frase com no maximo 40 caracteres:\n");
        fflush(stdin);
        gets(FRASE);
        TAM = ENCONTRAR_TAM_STRING(FRASE);
        if(TAM <= TAM_MAXIMO)
        {
            for(I = 0;I < TAM;I++)
            {
                printf("%c\n", FRASE[I]);
            }
        }
        else
            printf("Tamanho da frase invalido!\n");
    }while(TAM > TAM_MAXIMO);


    printf("\n");
    return 0;
}
