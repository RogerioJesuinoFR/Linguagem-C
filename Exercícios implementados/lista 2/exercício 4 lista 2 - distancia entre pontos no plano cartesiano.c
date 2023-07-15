/* Construa um procedimento que, tem como parâmetros de entrada dois pontos quaisquer no plano,
P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é:*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void DISTANCIA(float X1, float Y1, float X2, float Y2)
{
    float D;
    D = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
    printf("A distancia entre os pontos e:\n\n%f", D);
}

int main()
{
    float X1, Y1, X2, Y2;
    printf("Escreva o valor da abscissa e da ordenada do primeiro ponto:\n");
    scanf("%f%f", &X1,&Y1);
    printf("Escreva o valor da abscissa e da ordenada do segundo ponto:\n");
    scanf("%f %f", &X2,&Y2);
    DISTANCIA(X1, Y1, X2, Y2);
    return 0;
}
