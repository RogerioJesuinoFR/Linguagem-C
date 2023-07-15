/*Escrever um programa que lê 5 conjuntos de 2 valores, o primeiro representando o número de um
aluno e o segundo representando a sua altura em centímetros. Encontrar o aluno mais alto e o
mais baixo e escrever seus números, suas alturas e uma mensagem dizendo se é o mais alto ou o
mais baixo.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NUM, NUM_MAIOR, NUM_MENOR, I = 0,ALT, MAIOR_ALT = 0, MENOR_ALT = 300;
    while(I < 5)
    {
        printf("Digite o numero do aluno:\n");
        scanf("%d", &NUM);
        printf("Digite a sua altura em centimetros:\n");
        scanf("%d", &ALT);
        if (ALT > MAIOR_ALT)
        {
            MAIOR_ALT = ALT;
            NUM_MAIOR = NUM;
        }
        else if (ALT < MENOR_ALT)
        {
            MENOR_ALT = ALT;
            NUM_MENOR = NUM;
        }
        I++;
    }
    printf("O Aluno de numero %d e o mais alto, e mede %d centimetros\n", NUM_MAIOR, MAIOR_ALT);
    printf("O Aluno de numero %d e o mais baixo, e mede %d centimetros\n", NUM_MENOR, MENOR_ALT);
    system("pause");
    return 0;
}
