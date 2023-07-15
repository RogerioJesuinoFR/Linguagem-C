/*Faça um programa que calcule e escreva o valor de S:
S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, DEN;
    float S;
    S = 0.0;
    NUM = 1;
    DEN = 1;
    while (NUM <= 99 && DEN <= 50)
    {
        S += (float) NUM/DEN;
        NUM += 2;
        DEN++;
    }
    printf("O valor de S e: %.2f\n", S);
    system("pause");
    return 0;
}
