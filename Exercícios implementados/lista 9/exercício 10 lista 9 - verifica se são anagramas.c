/* Deseja-se ler duas cadeias de N caracteres cada e verificar se uma é anagrama da outra,
mostrando em seguida os pares que não são anagramas com a indicação “não são anagramas” e
os pares que são anagramas com a indicação “são anagramas”.
Ex: ALMA LAMA - são anagramas
 BOLA LOBO - não são anagramas*/

#include <stdio.h>
#include <string.h>
#define TAM_MAXIMO 100

void CONT_CARACTERES(char STR[], int CONT[])
{
    int I;
    for (I = 0; STR[I]; I++)
    {
        CONT[STR[I] - 'a']++;
    }
}

int VERIFICA_ANAGRAMA(char STR1[], char STR2[])
{
    int CONT1[26] = {0}, CONT2[26] = {0}, I;

    CONT_CARACTERES(STR1, CONT1);
    CONT_CARACTERES(STR2, CONT2);

    for (I = 0; I < 26; I++)
    {
        if (CONT1[I] != CONT2[I])
        {
            return 0; // não são anagrams
        }
    }

    return 1; // Anagrams
}

int main()
{
    char STR1[TAM_MAXIMO], STR2[TAM_MAXIMO];
    int N;

    printf("Digite o tamanho das cadeias (N):\n");
    scanf("%d", &N);

    printf("Digite a primeira cadeia de caracteres:\n");
    scanf(" %[^\n]s", STR1);

    printf("Digite a segunda cadeia de caracteres:\n");
    scanf(" %[^\n]s", STR2);

    if (strlen(STR1) != N || strlen(STR2) != N)
    {
        printf("As cadeias de caracteres devem ter tamanho N.\n");
        return 0;
    }

    if (VERIFICA_ANAGRAMA(STR1, STR2))
    {
        printf("As cadeias \"%s\" e \"%s\" sao anagramas.\n", STR1, STR2);
    } else {
        printf("As cadeias \"%s\" e \"%s\" nao sao anagramas.\n", STR1, STR2);
    }

    return 0;
}
