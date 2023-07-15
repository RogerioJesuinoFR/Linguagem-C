/*10. Faça um programa para ler um valor (que represente o lado de um quadrado) calcular e mostrar a
respectiva área do quadrado.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int LADO, AREA;
    printf("Digite o valor do lado do quadrado em centimetros:\n");
    scanf("%d", &LADO);
    AREA = LADO * LADO;
    printf("o valor da area do quadrado e de:\n\n%d centimetros quadrados\n\n", AREA);
    return 0;
}
