/* Escreva uma função que recebe um vetor e seu tamanho. A função deve trocar o primeiro
elemento com o último, o segundo elemento com o penúltimo, até o meio do vetor*/

#include <stdio.h>

void TROCA_ELEMENTO(int VETOR[], int TAMANHO)
{
    int I, TEMP;

    for (I = 0; I < TAMANHO / 2; I++)
    {
        TEMP = VETOR[I];
        VETOR[I] = VETOR[TAMANHO - 1 - I];
        VETOR[TAMANHO - 1 - I] = TEMP;
    }
}

int main()
{
    int TAMANHO, I;

    printf("Digite o tamanho do vetor que deseja:\n");
    scanf("%d", &TAMANHO);

    int VETOR[TAMANHO];

    printf("Digite os valores do vetor:\n");
    for (I = 0; I < TAMANHO; I++)
    {
        printf("Valor %d: ", I + 1);
        scanf("%d", &VETOR[I]);
    }

    TROCA_ELEMENTO(VETOR, TAMANHO);

    printf("Vetor com elementos trocados:\n[");
    for (I = 0; I < TAMANHO; I++)
    {
        printf("%d ", VETOR[I]);
    }
    printf("]\n");

    return 0;
}
