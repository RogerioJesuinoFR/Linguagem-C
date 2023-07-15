/* Dada uma matriz quadrada verificar se ela é simétrica*/

#include<stdio.h>

int main()
{
    int NUM_L, NUM_C, L, C, SIMETRICA = 1, MATRIZ_VALIDA = 0;// Variável para verificar se a matriz é válida

    do
    {
        printf("Informe o numero de linhas e colunas da matriz:\n");
        scanf("%d", &NUM_L);
        scanf("%d", &NUM_C);
        int MATRIZ[NUM_L][NUM_C];

        if(NUM_L == NUM_C)
        {
            MATRIZ_VALIDA = 1; // Marca a matriz como válida

            for(L = 0; L < NUM_L; L++)
            {
                for(C = 0; C < NUM_C; C++)
                {
                    printf("Digite o elemento [%d][%d]\n", L, C);
                    scanf("%d", &MATRIZ[L][C]);
                }
            }

            for(L = 0; L < NUM_L; L++)
            {
                for(C = 0; C < NUM_C; C++)
                {
                    if(L != C)
                    {
                        if(MATRIZ[L][C] != MATRIZ[C][L])
                        {
                            SIMETRICA = 0;
                            break;
                        }
                    }
                }
                if(!SIMETRICA)
                    break;
            }

            if(SIMETRICA)
                printf("A matriz e simetrica!\n");
            else
                printf("A matriz nao e simetrica!\n");

        }
        else
            printf("\nEssa matriz nao e quadrada, por favor informe uma matriz quadrada\n\n");
    } while(!MATRIZ_VALIDA); // Continua o loop enquanto a matriz não for válida

    return 0;
}
