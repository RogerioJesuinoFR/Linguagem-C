/* Dado 3 conjuntos de números, de tamanho N, calcular a média de cada um dos conjuntos.*/

#include <stdio.h>

float CALCULAR_MEDIA(int CONJ[], int TAM) 
{
    int SOMA = 0;
    for (int i = 0; i < TAM; i++) 
    {
        SOMA += CONJ[i];
    }
    return (float) SOMA / TAM;
}

int main() 
{
    int TAM_CONJUNTO1, TAM_CONJUNTO2, TAM_CONJUNTO3;

    printf("Digite o tamanho dos conjunto 1: ");
    scanf("%d", &TAM_CONJUNTO1);

    int CONJ1[TAM_CONJUNTO1];

    printf("Digite os elementos do conjunto 1:\n");
    for (int i = 0; i < TAM_CONJUNTO1; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &CONJ1[i]);
    }

    printf("Digite o tamanho dos conjunto 2: ");
    scanf("%d", &TAM_CONJUNTO2);

    int CONJ2[TAM_CONJUNTO2];

    printf("Digite os elementos do conjunto 2:\n");
    for (int i = 0; i < TAM_CONJUNTO2; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &CONJ2[i]);
    }

    printf("Digite o tamanho dos conjunto 3: ");
    scanf("%d", &TAM_CONJUNTO3);

    int CONJ3[TAM_CONJUNTO3];

    printf("Digite os elementos do conjunto 3:\n");
    for (int i = 0; i < TAM_CONJUNTO3; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &CONJ3[i]);
    }

    float MEDIA1 = CALCULAR_MEDIA(CONJ1, TAM_CONJUNTO1);
    float MEDIA2 = CALCULAR_MEDIA(CONJ2, TAM_CONJUNTO2);
    float MEDIA3 = CALCULAR_MEDIA(CONJ3, TAM_CONJUNTO3);

    printf("A media do conjunto 1 e: %.2f\n", MEDIA1);
    printf("A media do conjunto 2 e: %.2f\n", MEDIA2);
    printf("A media do conjunto 3 e: %.2f\n", MEDIA3);

    return 0;
}
