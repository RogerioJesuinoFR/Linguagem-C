/*11.10. Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada obtida por um aluno
para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o seguinte: duas notas e os dois respectivos
pesos das notas (pesquise a fórmula da média ponderada).*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float NOTA1, NOTA2, PESO1, PESO2, MEDIA;
    printf("Digite a nota do primeiro bimestre:\n");
    scanf("%f", &NOTA1);
    printf("Digite a segunda nota do segundo bimestre:\n");
    scanf("%f", &NOTA2);
    printf("Digite o peso do primeiro bimestre:\n");
    scanf("%f", &PESO1);
    printf("Digite o peso do segundo bimestre:\n");
    scanf("%f", &PESO2);
    MEDIA = ((NOTA1 * PESO1)+(NOTA2 * PESO2))/(PESO1 + PESO2);
    printf("A media ponderada e de:\n\n%.1f\n\n", MEDIA);
    return 0;
}
