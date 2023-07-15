/*13. Dado um número inteiro não nulo de três dígitos, imprimir este número ao contrário, isto e, se a entrada
for 123 (cento e vinte e três), imprimir 321 (trezentos e vinte e um). Usar operações sobre inteiros, por
exemplo, divisões sucessivas por 10.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NUM, CENTENA, DEZENA, UNIDADE;
    printf("Digite um numero de tres digitos:\n");
    scanf("%d", &NUM);
    CENTENA = NUM/100;
    DEZENA = (NUM%100)/10;
    UNIDADE = NUM%10;
    printf("O numero invertido e:\n\n%d%d%d\n\n", UNIDADE, DEZENA, CENTENA);
    return 0;
}
