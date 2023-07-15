/*3. Escreva um programa para ler, calcular e escrever a média aritmética entre dois números.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float NUM1, NUM2, MEDIA;
    int OPCAO;
    do
    {
        printf("\n\t1 - Calcular media\n\t2 - Sair\n");
        scanf("%d", &OPCAO);
        if (OPCAO == 1)
        {
            printf("Digite os numeros numeros: \n");
            scanf("%f%f", &NUM1, &NUM2);
            MEDIA = (NUM1 + NUM2)/2;
            printf("A media aritmetica dos numeros e: %.2f\n", MEDIA);
        }
    }while(OPCAO == 1);
    return 0;
}
