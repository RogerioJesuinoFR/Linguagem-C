/*10. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar se é um triângulo equilátero, isósceles ou escaleno. Se eles não
formarem um triângulo, escreva uma mensagem.*/

#include<stdio.h>
#include<stdlib.h>

void VERIFICACAO(float X, float Y, float Z)
{
    if(X + Y > Z && X + Z > Y && Y + Z > X)
    {
        if (X == Y && Y == Z)
        {
            printf("Triangulo equilatero\n");
        }
        else if(X == Y || X == Z || Y == Z)
        {
            printf("Triangulo isosceles\n");
        }
        else
            printf("Triangulo escaleno\n");
    }
    else
        printf("Nao e possivel formar um triangulo com os valores informados.\n");
}

int main()
{
    float X, Y, Z;
    printf("Digite 3 valores:\n");
    scanf("%f%f%f", &X, &Y, &Z);
    VERIFICACAO(X, Y, Z);
    return 0;
}
