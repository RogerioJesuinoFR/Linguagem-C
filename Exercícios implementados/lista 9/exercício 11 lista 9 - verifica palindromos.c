/* Pal�ndromos s�o palavras ou frases que em l�ngua portuguesa podem ser lidas da direita para a
esquerda, como � usual, ou da esquerda para a direita. Como por exemplo a palavra OVO,
RADAR, MUSSUM entre outras. Fa�a um programa no qual o usu�rio informe uma palavra e
seja verificada e apresentada se a mesma � ou n�o um pal�ndromo.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int VERIFICA_PALINDROMO(char STR[])
{
    int I, J;
    int TAM = strlen(STR);

    // Removendo espa�os e convertendo para letras min�sculas
    char REMOVE_ESPACO[TAM];
    int TAM_FINAL = 0;
    for (I = 0; I < TAM; I++)
    {
        if (!isspace(STR[I]))
        {
            REMOVE_ESPACO[TAM_FINAL++] = tolower(STR[I]);
        }
    }

    // Verificando se a string limpa � um pal�ndromo
    for (I = 0, J = TAM_FINAL - 1; I < J; I++, J--) {
        if (REMOVE_ESPACO[I] != REMOVE_ESPACO[J]) {
            return 0; // N�o � um pal�ndromo
        }
    }

    return 1; // � um pal�ndromo
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

