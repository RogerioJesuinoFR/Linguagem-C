/* Fa�a um programa que atribua a string �algoritmos� para a vari�vel DISCIPLINA (usando a
fun��o strcpy).*/

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
