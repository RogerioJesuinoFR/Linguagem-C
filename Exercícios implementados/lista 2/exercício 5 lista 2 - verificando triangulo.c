/*Faça um programa que leia 3 valores (A, B e C). Logo após sejam passados como parâmetro a um
procedimento que verifica se eles formam ou não um triângulo. Em caso positivo, verificar que
tipo de triangulo é: equilátero, isósceles ou escaleno.*/

#include<stdio.h>
#include<stdlib.h>

void VERIFICACAO(float A, float B, float C)
{
    if(A + B > C && A + C > B && B + C > A)
    {
        if (A == B && B == C)
        {
            printf("Triangulo equilatero\n");
        } else if(A == B || A == C || B == C)
        {
            printf("Triangulo isosceles\n");
        }else
            printf("Triangulo escaleno\n");
    }
    else
        printf("Nao e possivel formar um triangulo com os valores informados.\n");
}

int main()
{
    float A, B, C;
    printf("Digite 3 valores:\n");
    scanf("%f%f%f", &A, &B, &C);
    VERIFICACAO(A, B, C);
    return 0;
}
