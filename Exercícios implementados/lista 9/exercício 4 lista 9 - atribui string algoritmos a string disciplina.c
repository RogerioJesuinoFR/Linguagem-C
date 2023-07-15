/* Faça um programa que atribua a string “algoritmos” para a variável DISCIPLINA (sem usar a
função strcpy).*/

#include <stdio.h>
#define TAM_MAXIMO 11

void ATRIBUIR_STRING(char DESTINO[], const char ORIGEM[])
{
    int I = 0;
    while (ORIGEM[I] != '\0')
    {
        DESTINO[I] = ORIGEM[I];
        I++;
    }

    DESTINO[I] = '\0';
}

int main()
{
    char DISCIPLINA[TAM_MAXIMO];
    const char ORIGEM[11];
    printf("Digite o nome da disciplina:\n");
    gets(ORIGEM);
    ATRIBUIR_STRING(DISCIPLINA, ORIGEM);

    printf("DISCIPLINA: %s\n", DISCIPLINA);

    return 0;
}
