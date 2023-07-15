/*3. Fazer um programa que:
a) leia o valor de X de uma unidade de entrada;
b)calcule e escreva o valor do seguinte somatório:*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int X, EXP = 25, DIV = 1;
    double SOMA = 0, RES = 0;
    printf("Digite um valor de X:\n");
    scanf("%d", &X);
    while(EXP >= 1)
    {
        if (DIV % 2 == 0)
        {
            RES = (double) (pow(X, EXP))/ DIV;
            SOMA -= RES;
        }
        else
        {
            RES = (double) (pow(X, EXP))/ DIV;
            SOMA += RES;
        }
        DIV++;
        EXP--;
    }
    printf("O valor do somatorio e %.2f\n", SOMA);
    system("pause");
    return 0;
}
