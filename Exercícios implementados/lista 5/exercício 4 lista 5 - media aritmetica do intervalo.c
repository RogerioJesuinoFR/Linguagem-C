/*Escrever um programa semelhante ao anterior que calcula as médias aritméticas de cada intervalo
e as escreve, juntamente com o número de valores de cada intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, INTERVALO1, INTERVALO2, FORA_INTERVALO, SOMA_INTERVALO1, SOMA_INTERVALO2, SOMA_FORA_INTERVALO;
    float MEDIA_INTERVALO1, MEDIA_INTERVALO2, MEDIA_FORA_INTERVALO;
    INTERVALO1 = 0;
    INTERVALO2 = 0;
    FORA_INTERVALO = 0;
    SOMA_INTERVALO1 = 0;
    SOMA_INTERVALO2 = 0;
    SOMA_FORA_INTERVALO = 0;

    printf("Digite os numeros (digite -1 para encerrar): \n");

    while (1)
    {
        scanf("%d", &NUM);

        if (NUM == -1)
            break;

        if (NUM >= 0 && NUM <= 24)
        {
            INTERVALO1++;
            SOMA_INTERVALO1 += NUM;
        } else if (NUM >= 25 && NUM <= 50){
            INTERVALO2++;
            SOMA_INTERVALO2 += NUM;
        } else {
            FORA_INTERVALO++;
            SOMA_FORA_INTERVALO += NUM;
        }
    }
    MEDIA_INTERVALO1 = (float) SOMA_INTERVALO1 / INTERVALO1;
    MEDIA_INTERVALO2 = (float) SOMA_INTERVALO2 / INTERVALO2;
    MEDIA_FORA_INTERVALO = (float) SOMA_FORA_INTERVALO / FORA_INTERVALO;

    printf("Quantidade de numeros no intervalo [0-24]: %d\n", INTERVALO1);
    printf("Media do intervalo [0-24]: %.2f\n", MEDIA_INTERVALO1);
    printf("Quantidade de numeros no intervalo [25-50]: %d\n", INTERVALO2);
    printf("Media do intervalo [25-50]: %.2f\n", MEDIA_INTERVALO2);
    printf("Quantidade de numeros fora dos intervalos: %d\n", FORA_INTERVALO);
    printf("Media fora do intervalo: %.2f\n", MEDIA_FORA_INTERVALO);

    system("pause");
    return 0;
}
