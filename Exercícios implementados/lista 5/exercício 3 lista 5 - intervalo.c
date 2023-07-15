/*Escrever um programa que lê um número não conhecido de valores, um de cada vez, e conta
quantos deles estão em cada um dos intervalos: [0-24], [25-50] e fora deste intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, INTERVALO1, INTERVALO2, FORA_INTERVALO;
    INTERVALO1 = 0;
    INTERVALO2 = 0;
    FORA_INTERVALO = 0;
     printf("Digite os numeros (digite -1 para encerrar):\n");
    while (1)
    {
        scanf("%d", &NUM);
        if (NUM == -1)
            break;

        if ((NUM >= 0)&&(NUM <= 24))
        {
            INTERVALO1++;
        }else if ((NUM >= 25)&&(NUM <= 50))
        {
            INTERVALO2++;
        }else
            FORA_INTERVALO++;
    }

    printf("A quantidade de numeros no intervalo de [0-24] e: %d\n", INTERVALO1);
    printf("A quantidade de numeros no intervalo de [25-50] e: %d\n", INTERVALO2);
    printf("A quantidade de numeros fora do intervalo e: %d\n", FORA_INTERVALO);

    system("pause");
    return 0;
}
