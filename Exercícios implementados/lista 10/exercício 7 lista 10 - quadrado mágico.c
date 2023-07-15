/* Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de
cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal
e secundária são todos iguais. Dada uma matriz quadrada A (n x m), verificar se A é um quadrado
mágico*/

#include <stdio.h>

int main()
{
    int L, C, I, AUX_L = 0, AUX_C = 0, SOMA_DIG_PRINC = 0, SOMA_DIG_SEC = 0, SOMA_L_C = 0;
    int NUM_L, NUM_C, MATRIZ_VALIDA = 0, SOMA_VALIDA = 1;

    printf("Informe o numero de linhas e colunas da matriz:\n");
    scanf("%d", &NUM_L);
    scanf("%d", &NUM_C);

    if (NUM_L == NUM_C)
    {
        int MATRIZ[NUM_L][NUM_C];
        int TAM = NUM_L, TAM_INICIAL = TAM;
        int SOMA_LINHA[TAM], SOMA_COLUNA[TAM];

        for (L = 0; L < TAM; L++)
        {
            SOMA_LINHA[L] = 0;
            SOMA_COLUNA[L] = 0;
        }

        for (L = 0; L < NUM_L; L++)
        {
            for (C = 0; C < NUM_C; C++)
            {
                printf("Digite o elemento [%d][%d]:\n", L, C);
                scanf("%d", &MATRIZ[L][C]);

                SOMA_LINHA[L] += MATRIZ[L][C];
                SOMA_COLUNA[C] += MATRIZ[L][C];

                if (L == C)
                    SOMA_DIG_PRINC += MATRIZ[L][C];
                if (L == TAM_INICIAL - 1 - C)
                    SOMA_DIG_SEC += MATRIZ[L][C];
            }
        }

        for (I = 0; I < TAM_INICIAL; I++)
        {
            if (SOMA_LINHA[I] != SOMA_COLUNA[I])
            {
                SOMA_VALIDA = 0;
                break;
            }
        }

        SOMA_L_C = SOMA_LINHA[0];

        if (SOMA_L_C == SOMA_DIG_PRINC && SOMA_L_C == SOMA_DIG_SEC && SOMA_VALIDA)
            printf("Essa matriz e um quadrado magico!\n");
        else
            printf("Essa matriz nao e um quadrado magico!\n");
    }
    else
    {
        printf("\nEssa matriz nao e quadrada. Por favor, informe uma matriz quadrada.\n\n");
    }

    return 0;
}

