/*Sendo H = 1 + 1/2 + 1/3 + 1/4 +...+ 1/N, prepare um algoritmo para gerar o número H. O número
N é fornecido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, DEN, N;
    float S;
    S = 0.0;
    NUM = 1;
    DEN = 1;
    printf("Digite o valor de N:\n");
    scanf("%d", &N);
    while (DEN <= N)
    {
        S += (float) NUM/DEN;
        DEN++;
    }
    printf("O valor de S e: %.2f\n", S);
    system("pause");
    return 0;
}
