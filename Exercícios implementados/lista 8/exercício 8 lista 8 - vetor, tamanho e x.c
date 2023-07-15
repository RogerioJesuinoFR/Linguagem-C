/* Escreva uma função que recebe um vetor, seu tamanho e um número X. Mostre a posição de cada 
elemento igual a X deste vetor.*/

#include <stdio.h>

int main() 
{
    int TAMANHO, POSICAO;
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &TAMANHO);
    
    int VETOR[TAMANHO];
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 1; i <= TAMANHO; i++) 
    {
        printf("Elemento %d: ", i);
        scanf("%d", &VETOR[i]);
    }
    
    printf("Digite a posicao desejada:\n");
    scanf("%d", &POSICAO);
    
    if (POSICAO >= 0 && POSICAO < TAMANHO) 
    {
        printf("O valor do vetor na posicao %d e: %d\n", POSICAO, VETOR[POSICAO]);
    } else {
        printf("Posicao invalida!\n");
    }
    
    return 0;
}

