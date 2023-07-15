/*Escrever um programa para ler e imprimir tr�s n�meros. Se o primeiro for positivo, imprimir sua
raiz quadrada, caso contr�rio, imprimir o seu quadrado; se o segundo n�mero for maior que 10 e
menor que 100, imprimir a mensagem: �N�mero est� entre 10 e 100 � intervalo permitido�; se o
terceiro n�mero for menor que o segundo, calcular e imprimir a diferen�a entre eles, caso
contr�rio, imprimir o terceiro n�mero adicionado de 1.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float NUM1, NUM2, NUM3, RAIZ, QUADRADO, DIFERENCA;
    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &NUM1, &NUM2, &NUM3);
    if (NUM1 > 0)
    {
        RAIZ = sqrt(NUM1);
        printf("A raiz e: %.1f\n\n", RAIZ);
    }
    else
    {
        QUADRADO = pow(NUM1, 2);
        printf("O quadrado e: %.1f\n\n", QUADRADO);
    }
    if (NUM2 > 10 && NUM2 < 100)
        printf("Numero esta entre 10 e 100 - intervalo permitido\n\n");
    else
        printf("Numero fora do intervalo permitido\n\n");
    if (NUM3 < NUM2)
    {
        DIFERENCA = NUM3 - NUM2;
        printf("A diferenca entre eles e: %.1f\n\n", DIFERENCA);
    }
    else
    {
        NUM3 = 1 + NUM3;
        printf("Terceiro numero adicionado de um e: %.1f\n\n", NUM3);
    }
    system("pause");
    return 0;
}
