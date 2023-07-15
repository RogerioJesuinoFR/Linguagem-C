/* Palíndromos são palavras ou frases que em língua portuguesa podem ser lidas da direita para a
esquerda, como é usual, ou da esquerda para a direita. Como por exemplo a palavra OVO,
RADAR, MUSSUM entre outras. Faça um programa no qual o usuário informe uma palavra e
seja verificada e apresentada se a mesma é ou não um palíndromo.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int VERIFICA_PALINDROMO(char STR[])
{
    int I, J;
    int TAM = strlen(STR);

    // Removendo espaços e convertendo para letras minúsculas
    char REMOVE_ESPACO[TAM];
    int TAM_FINAL = 0;
    for (I = 0; I < TAM; I++)
    {
        if (!isspace(STR[I]))
        {
            REMOVE_ESPACO[TAM_FINAL++] = tolower(STR[I]);
        }
    }

    // Verificando se a string limpa é um palíndromo
    for (I = 0, J = TAM_FINAL - 1; I < J; I++, J--) {
        if (REMOVE_ESPACO[I] != REMOVE_ESPACO[J]) {
            return 0; // Não é um palíndromo
        }
    }

    return 1; // É um palíndromo
}

int main()
{
    char STR[100];

    printf("Digite uma palavra: ");
    scanf("%s", STR);

    if (VERIFICA_PALINDROMO(STR))
    {
        printf("%s e um palindromo.\n", STR);
    }
    else
    {
        printf("%s nao e um palindromo.\n", STR);
    }

    return 0;
}

