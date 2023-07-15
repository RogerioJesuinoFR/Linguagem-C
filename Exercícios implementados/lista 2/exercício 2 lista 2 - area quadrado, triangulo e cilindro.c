/*2. Faça um algoritmo para calcular e imprimir:
a) Área de um quadrado
b) Área de um triangulo
c) Área de um cilindro
Para cada opção faça a leitura dos dados necessários em um procedimento.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void AREA_QUADRADO()
{
    float LADO, RES;
    printf("Digite o lado do quadrado:\n");
    scanf("%f", &LADO);
    RES = LADO * LADO;
    printf("A area do quadrado e: %.1f\n\n", RES);
}

void AREA_TRIANGULO()
{
    float BASE, ALTURA, RES;
    printf("Digite o valor da base:\n");
    scanf("%f", &BASE);
    printf("Digite o valor da altura:\n");
    scanf("%f", &ALTURA);
    RES = (BASE * ALTURA)/2;
    printf("A area do triangulo e: %.1f\n\n", RES);
}

float AREA_LATERAL_CILINDRO(float R, float H)
{
    float AREA_LAT;
    AREA_LAT = 2 * 3.14 * R * H;
    return AREA_LAT;
}

float AREA_BASE(float RAIO)
{
    float AR_BASE;
    AR_BASE = 3.14 * pow (RAIO,2);
    return AR_BASE;
}

void AREA_CILINDRO()
{
    float AREA, AR_LAT, AR_B, RAIO, ALTURA;
    printf("Digite o raio da base e altura do cilindro:\n");
    scanf("%f %f", &RAIO, &ALTURA);
    AR_LAT = AREA_LATERAL_CILINDRO(RAIO, ALTURA);
    AR_B = AREA_BASE (RAIO);
    AREA = AR_LAT + 2 * AR_B;
    printf("A area do cilindro e: %.1f\n\n", AREA);
}

int main()
{
    printf("AREA QUADRADO\n");
    AREA_QUADRADO();
    printf("AREA TRIANGULO\n");
    AREA_TRIANGULO();
    printf("AREA CILINDRO\n");
    AREA_CILINDRO();
    return 0;
}
