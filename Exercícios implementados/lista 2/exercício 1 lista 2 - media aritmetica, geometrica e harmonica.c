/*1. Fa�a um algoritmo para ler, calcular e escrever a m�dia entre tr�s n�meros conforme as op��es
abaixo:
a) A m�dia aritm�tica dada pela f�rmula: a + b + c
 3
b) A m�dia harm�nica dada pela f�rmula: 3____
1 + 1 + 1
a b c
c) A m�dia geom�trica dada pela f�rmula: a.b.c 3
Para cada op��o crie um procedimento.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void MEDIA_ARITMETICA(float N1, float N2, float N3)
{
    float RES;
    RES = (N1 + N2 + N3)/3;
    printf("A media aritmetica e: %.1f\n", RES);
}

void MEDIA_HARMONICA(float NU1, float NU2, float NU3)
{
    float RES;
    RES = 3 / ((1/NU1) + (1/NU2) + (1/NU3));
    printf("A media harmonica e: %.1f\n", RES);
}

void MEDIA_GEOMETRICA(float NUM1, float NUM2, float NUM3)
{
    float RES;
    RES = pow((NUM1*NUM2*NUM3), 1/3);
    printf("A media geometrica e: %.1f\n", RES);
}

int main()
{
    float A, B, C;
    printf("Digite tres valores:\n");
    scanf("%f%f%f", &A, &B, &C);
    MEDIA_ARITMETICA(A, B, C);
    MEDIA_HARMONICA(A, B, C);
    MEDIA_GEOMETRICA(A, B, C);
    return 0;
}
