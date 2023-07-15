/*9. Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit e o mesmo converte
os valores para Celsius Apresente o resultado (pesquise a fórmula).*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float TEMPERATURA_F, TEMPERATURA_C;
    printf("Digite o valor da temperatura em Fahrenheit:\n");
    scanf("%f", &TEMPERATURA_F);
    TEMPERATURA_C = (TEMPERATURA_F - 32)/1.8;
    printf("A temperatura em Graus Celsius e: \n\n%.1f\n\n", TEMPERATURA_C);
    return 0;
}
