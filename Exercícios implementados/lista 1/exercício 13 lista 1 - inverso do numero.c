/*13. Dado um n�mero inteiro n�o nulo de tr�s d�gitos, imprimir este n�mero ao contr�rio, isto e, se a entrada
for 123 (cento e vinte e tr�s), imprimir 321 (trezentos e vinte e um). Usar opera��es sobre inteiros, por
exemplo, divis�es sucessivas por 10.*/

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
