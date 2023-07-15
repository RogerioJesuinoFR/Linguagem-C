/* Fazer um programa que leia duas sequ�ncias de inteiros, n�o necessariamente contendo a mesma
quantidade de n�meros, e construa um terceiro vetor, sem destruir os originais, que � a
concatena��o do primeiro com o segundo. Ou seja, se o primeiro vetor contiver os valores [7 3] e
o segundo [9 2], a concatena��o dos dois conter� [7 3 9 2]. A concatena��o deve ser feita por uma
fun��o. O tamanho m�ximo das sequ�ncias deve estar definido no programa. */

#include <stdio.h>

#define TAMANHO_MAXIMO 100

void CONCATENAR_SEQUENCIAS(int VETOR1[], int TAMANHO1, int VETOR2[], int TAMANHO2, int VETOR_CONCATENADO[])
{
    int I, J;

    // Copiar elementos do primeiro vetor para o vetor concatenado
    for (I = 0; I < TAMANHO1; I++)
    {
        VETOR_CONCATENADO[I] = VETOR1[I];
    }

    // Copiar elementos do segundo vetor para o vetor concatenado
    for (J = 0; J < TAMANHO2; J++)
    {
        VETOR_CONCATENADO[TAMANHO1 + J] = VETOR2[J];
    }
}

int main()
{
    int VETOR1[TAMANHO_MAXIMO];
    int TAMANHO1;

    int VETOR2[TAMANHO_MAXIMO];
    int TAMANHO2;

    int VETOR_CONCATENADO[2 * TAMANHO_MAXIMO];

    int I;

    // Leitura da primeira sequ�ncia
    printf("Digite o tamanho da primeira sequencia:\n");
    scanf("%d", &TAMANHO1);

    printf("Digite os elementos da primeira sequencia:\n");
    for (I = 0; I < TAMANHO1; I++)
    {
        printf("Elemento %d: ", I + 1);
        scanf("%d", &VETOR1[I]);
    }

    // Leitura da segunda sequ�ncia
    printf("\nDigite o tamanho da segunda sequencia:\n");
    scanf("%d", &TAMANHO2);

    printf("Digite os elementos da segunda sequencia:\n");
    for (I = 0; I < TAMANHO2; I++)
    {
        printf("Elemento %d: ", I + 1);
        scanf("%d", &VETOR2[I]);
    }

    // Concatenar as sequ�ncias
    CONCATENAR_SEQUENCIAS(VETOR1, TAMANHO1, VETOR2, TAMANHO2, VETOR_CONCATENADO);

    // Imprimir o vetor concatenado
    printf("\nVetor concatenado:\n[");
    for (I = 0; I < TAMANHO1 + TAMANHO2; I++)
    {
        printf("%d ", VETOR_CONCATENADO[I]);
    }
    printf("]\n");

    return 0;
}
