/* Escreva a função que recebe 2 parâmetros: o primeiro parâmetro é um vetor de inteiros e o 
segundo parâmetro é um número. A função deve retornar como resultado o segundo parâmetro 
assim como o número de vezes que ele ocorre dentro do vetor.*/

#include <stdio.h>

int countOccurrences(int vetor[], int tamanho, int numero) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 4, 4, 6, 7, 4};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numero = 4;

    int ocorrencias = countOccurrences(vetor, tamanho, numero);

    printf("O número %d ocorre %d vezes no vetor.\n", numero, ocorrencias);

    return 0;
}
