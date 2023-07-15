/* Faça um programa que receba a idade, a altura de 15 pessoas. Calcule e escreva:
a) a quantidade de pessoas com idade superior a 50 anos;
b) a média das alturas das pessoas com idade entre 10 e 20 anos;
c) a maior altura encontrada;*/

#include<stdio.h>

int main()
{
    int IDADE, CONT = 0, ALTURA, PES_MAIS_50 = 0, MAIOR_ALT = 0, ALTURA_10_20 = 0;
    float MEDIA = 0.0;
    do
    {
        printf("Informe a altura em centimetros:\n");
        scanf("%d", &ALTURA);
        if(ALTURA > MAIOR_ALT)
            MAIOR_ALT = ALTURA;
        
        printf("Informe a idade:\n");
        scanf("%d", &IDADE);
        if(IDADE > 50)
            PES_MAIS_50++;
        else if (IDADE >= 10 && IDADE <= 20)
        {
            ALTURA_10_20 += ALTURA;
            MEDIA++;
        }
        CONT++;

    } while (CONT < 5);

    MEDIA = (float) ALTURA_10_20 / MEDIA;

    printf("A quantidade de pessoas com idade superior a 50 anos e de %d pessoas\n", PES_MAIS_50);
    printf("A media das alturas das pessoas com idade entre 10 e 20 anos e de %.2f centimetros\n", MEDIA);
    printf("A maior altura encontrada foi de %d centimetros\n\n", MAIOR_ALT);
    printf("Encerrando o programa!\n");
    return 0;
}