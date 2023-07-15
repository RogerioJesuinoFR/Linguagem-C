/*7. Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula:
VOLUME = COMPRIMENTO * LARGURA * ALTURA*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int COMPRIMENTO, LARGURA, ALTURA, VOLUME;
    printf("Digite o comprimento da caixa:\n");
    scanf("%d", &COMPRIMENTO);
    printf("Digite a largura da caixa:\n");
    scanf("%d", &LARGURA);
    printf("Digite a altura da caixa:\n");
    scanf("%d", &ALTURA);
    VOLUME = COMPRIMENTO * LARGURA * ALTURA;
    printf("O volume da caixa e de: \n\n%d metros cubicos\n\n", VOLUME);
    return 0;
}
