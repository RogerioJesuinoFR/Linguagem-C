/* Fa�a um programa que leia uma string digitada pelo usu�rio (m�ximo 20 caracteres) e imprima na
tela o n�mero de vogais existente nesta string.*/

#include<stdio.h>
#define TAM_MAXIMO 20

int main()
{
    char STRING[TAM_MAXIMO];
    int I, VOGAIS = 0;
    printf("Digite uma string com no maximo 20 caracteres:\n");
    fflush(stdin);
    gets(STRING);
    if(STRING[TAM_MAXIMO] <= TAM_MAXIMO)
    {
        for(I = 0;I < TAM_MAXIMO; I++)
        {
            if(STRING[I] == 'a'||STRING[I] == 'e'||STRING[I] == 'i'||STRING[I] == 'o'||STRING[I] == 'u')
                VOGAIS++;
        }
        printf("O numero de vogais e: %d", VOGAIS);
    }
    else
        printf("Tamanho da string invalido!\n");
    return 0;
}
