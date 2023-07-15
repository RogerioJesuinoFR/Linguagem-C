/*5. Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida de sua altura dividida
por dois. Escreva um programa que solicite os valores da base e da altura e forneça a área do triângulo.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int BASE, ALTURA, AREA;
    printf("Digite o valor da base do triangulo em centimetros: \n");
    scanf("%d", &BASE);
    printf("Digite o valor da altura do triangulo em centimetros: \n");
    scanf("%d", &ALTURA);
    AREA = (BASE * ALTURA)/2;
    printf("A area do triangulo e: \n\n%d centimetros quadrados\n", AREA);
    return 0;
}
