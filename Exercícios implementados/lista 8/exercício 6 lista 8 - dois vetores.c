/* Faça um programa que leia e armazene 5 valores inteiros em um vetor VET1. Leia outros 5 
valores inteiros e armazene num vetor VET2. A partir destes valores lidos, mostre na tela:
a. a soma dos elementos de cada vetor, nas respectivas posições;
b. a diferença dos elementos de cada vetor, nas respectivas posições;
c. o produto dos elementos de cada vetor, nas respectivas posições;
d. a divisão entre os elementos de cada vetor, nas respectivas posições (verificar divisão por 
0).*/

#include<stdio.h>

void SOMAR(int VET1[], int VET2[], int SOMA[], int TAMANHO)
{
    int C;
    for(C = 0; C < TAMANHO; C++)
    {
        SOMA[C] = VET1[C] + VET2[C];
    }
    printf("A soma dos vetores formou o vetor [");
    for(C = 0; C < TAMANHO; C++)
    {
        printf(" %d", SOMA[C]);
        printf("[%d]", C);
    }
    printf(" ]\n\n");
}

void SUBTRAIR(int VET1[], int VET2[], int SUB[], int TAMANHO)
{
    int C;
    printf("A subtracao dos vetores formou duas possibilidades:\n");
    for(C = 0; C < TAMANHO; C++)
    {
        SUB[C] = VET1[C] - VET2[C];
    }
    printf("1 opcao - Subtracao do primeiro vetor pelo segundo formando o vetor [");
    for(C = 0; C < TAMANHO; C++)
    {
        printf(" %d", SUB[C]);
        printf("[%d]", C);
    }
    printf(" ]\n");

    for(C = 0; C < TAMANHO; C++)
    {
        SUB[C] = VET2[C] - VET1[C];
    }
    printf("2 opcao - A subtracao do segundo vetor pelo primeiro formando o vetor [");
    for(C = 0; C < TAMANHO; C++)
    {
        printf(" %d", SUB[C]);
        printf("[%d]", C);
    }
    printf(" ]\n\n");
}

void MULTIPLICAR(int VET1[], int VET2[], int MULT[], int TAMANHO)
{
    int C;
    for(C = 0; C < TAMANHO; C++)
    {
        MULT[C] = VET1[C] * VET2[C];
    }
    printf("A multiplicacao dos vetores formou o vetor [");
    for(C = 0; C < TAMANHO; C++)
    {
        printf(" %d", MULT[C]);
        printf("[%d]", C);
    }
    printf(" ]\n\n");
}

void DIVIDIR(int VET1[], int VET2[], float DIV[], int TAMANHO)
{
    int C;
    printf("A divisao dos vetores formou duas possibilidades:\n");
    for(C = 0; C < TAMANHO; C++)
    {
        if(VET2 != 0)
            DIV[C] = (float) VET1[C] / VET2[C];
    }
    printf("1 opcao - A divisao do primeiro vetor pelo segundo formando o vetor [");
    for(C = 0; C < TAMANHO; C++)
    {
        printf(" %.1f", DIV[C]);
        printf("[%d]", C);
    }
    printf(" ]\n");

    for(C = 0; C < TAMANHO; C++)
    {
        if(VET1 != 0)
            DIV[C] = (float) VET2[C] / VET1[C];
    }
    printf("2 opcao - A divisao do segundo vetor pelo primeiro formando o vetor [");
    for(C = 0; C < TAMANHO; C++)
    {
        printf(" %.1f", DIV[C]);
        printf("[%d]", C);
    }
    printf(" ]\n\n");
}

int main()
{
    int VET1[5], VET2[5], I, I2, SOMA[5] = {0}, SUB[5] = {0}, MULT[5] = {0};
    float DIV[5] = {0};
    for(I = 0; I < 5; I++)
    {
        printf("Digite os 5 primeiros valores positivos:\n");
        scanf("%d", &VET1[I]);
    }
    printf("\n");
    for(I2 = 0; I2 < 5; I2++)
    {
        printf("Digite os outros 5 valores positivos:\n");
        scanf("%d", &VET2[I2]);
    }
    printf("\n");
    SOMAR (VET1, VET2, SOMA, 5);
    SUBTRAIR (VET1, VET2, SUB, 5);
    MULTIPLICAR (VET1, VET2, MULT, 5);
    DIVIDIR (VET1, VET2, DIV, 5);

    return 0;
}