/*Elabore um procedimento para efetuar o c�lculo da quantidade de combust�vel gasto em uma
viagem, utilizando-se um autom�vel que faz 12 Kms por litro. No programa principal o usu�rio
fornece o tempo gasto e a velocidade m�dia durante a viagem. Desta forma, ser� poss�vel obter a
dist�ncia percorrida, calculada em uma fun��o especifica valor que ser� retornado ao
procedimento.*/

#include<stdio.h>
#include<stdlib.h>

float CALCULO_DISTANCIA(float TEMPO_GASTO, float VELOCIDADE_MEDIA)
{
    float DISTANCIA;
    TEMPO_GASTO = TEMPO_GASTO / 60;
    DISTANCIA = VELOCIDADE_MEDIA * TEMPO_GASTO;
    return DISTANCIA;
}

void COMBUSTIVEL(float CALCULO_DISTANCIA)
{
    float C;
    C = CALCULO_DISTANCIA / 12;
    printf("Para a viagem gastou-se %.1f litros de combustivel\n", C);
}

int main()
{
    float TEMPO_GASTO, VELOCIDADE_MEDIA, DISTANCIA;
    printf("Informe o tempo gasto na viagem (em minutos):\n");
    scanf("%f", &TEMPO_GASTO);
    printf("Informe a velocidade media da viagem (em Km/h):\n");
    scanf("%f", &VELOCIDADE_MEDIA);
    DISTANCIA = CALCULO_DISTANCIA(TEMPO_GASTO, VELOCIDADE_MEDIA);
    COMBUSTIVEL(DISTANCIA);
    return 0;
}
