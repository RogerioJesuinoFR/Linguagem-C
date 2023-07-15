/*10. Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um
tri�ngulo e, se forem, verificar se � um tri�ngulo equil�tero, is�sceles ou escaleno. Se eles n�o
formarem um tri�ngulo, escreva uma mensagem.*/

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
