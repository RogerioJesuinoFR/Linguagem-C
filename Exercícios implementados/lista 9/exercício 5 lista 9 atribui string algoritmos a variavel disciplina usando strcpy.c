/* Faça um programa que atribua a string “algoritmos” para a variável DISCIPLINA (usando a
função strcpy).*/

#include <stdio.h>
#define TAM_MAXIMO 11

int main()
{
    char STRING[11] = "algoritmos";
    char DISCIPLINA[11];
    strcpy(DISCIPLINA, STRING);
    printf(" Disciplina %s", DISCIPLINA);
    return 0;
}
