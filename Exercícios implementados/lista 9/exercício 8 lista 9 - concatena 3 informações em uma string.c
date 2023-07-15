/* Faça um programa onde o usuário digita 3 informações a respeito de uma pessoa: Nome,
endereço e telefone. Concatene essas três informações em uma única string*/

#include <stdio.h>
#include <string.h>

void UNIR_STRING(char NOME[], char ENDERECO[], char TELEFONE[], char STR_RES[])
{
    strcpy(STR_RES, NOME);
    strcat(STR_RES, " ");
    strcat(STR_RES, ENDERECO);
    strcat(STR_RES, " ");
    strcat(STR_RES, TELEFONE);
}

int main()
{
    char NOME[20], ENDERECO[50], TELEFONE[20], STR_RES[90];

    printf("Digite o seu nome:\n");
    gets(NOME);
    printf("Digite o seu endereco:\n");
    gets(ENDERECO);
    printf("Digite o seu telefone:\n");
    gets(TELEFONE);

    UNIR_STRING(NOME, ENDERECO, TELEFONE, STR_RES);
    printf("Resultado da uniao: %s\n", STR_RES);
    return 0;
}
