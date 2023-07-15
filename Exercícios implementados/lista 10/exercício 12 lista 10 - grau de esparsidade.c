/* Escrever um programa em linguagem C que leia, a partir do teclado, os elementos de uma matriz
com valores reais de dimensão M × N. Determine e imprima na tela o Grau de Esparsidade da
Matriz. O Grau de Esparsidade de uma Matriz é a relação entre o Número de Elementos Nulos e
o Número Total de Elementos da Matriz. Os valores de M e N devem ser definidos pela diretiva
#define. Exemplo de execução (para M = 3 e N = 4):
3 0 0 2
0 2 1 0
0 3 7 1
O grau de Esparsidade é 5 / 12 = 0.4166*/

#include<stdio.h>
#define M 3
#define N 4

int main()
{
    int MATRIZ[M][N];
    int I, J;
    int NUM_ELEM_NULOS = 0;
    int NUM_ELEM_TOTAL = M * N;
    float GRAU_ESPARSIDADE;

    for (I = 0; I < M; I++)
    {
        for (J = 0; J < N; J++)
        {
            printf("Digite o elemento [%d][%d]:\n", I, J);
            scanf("%d", &MATRIZ[I][J]);
            if (MATRIZ[I][J] == 0)
            {
                NUM_ELEM_NULOS++;
            }
        }
    }

    GRAU_ESPARSIDADE = (float)NUM_ELEM_NULOS / NUM_ELEM_TOTAL;

    printf("O grau de esparsidade e %.4f\n", GRAU_ESPARSIDADE);

    return 0;
}
