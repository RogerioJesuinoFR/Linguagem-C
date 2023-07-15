/*Perguntar ao usuário se ele deseja calcular a área de um:
a. triângulo
b. circulo
c. cubo
d. cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void AREA_CIRCULO()
{
    float RAIO, RES;
    printf("Digite o valor do raio:\n");
    scanf("%f", &RAIO);
    RES = 3.14 * pow(RAIO,2);
    printf("A area do circulo e: %.1f\n\n", RES);
}

void AREA_CUBO()
{
    float LADO, RES;
    printf("Digite o valor do lado:\n");
    scanf("%f", &LADO);
    RES = 6*(pow(LADO,2));
    printf("A area do cubo e: %.1f\n\n", RES);
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
    char ESCOLHA;
    printf("Deseja calcular a area de um:\nA - triangulo\nB - circulo\nC - cubo\nD - cilindro\n");
    scanf("%c", &ESCOLHA);
    switch(ESCOLHA)
    {
    case 'A':
    case 'a':
        AREA_TRIANGULO();
        break;
    case 'B':
    case 'b':
        AREA_CIRCULO();
        break;
    case 'C':
    case 'c':
        AREA_CUBO();
        break;
    case 'D':
    case 'd':
        AREA_CILINDRO();
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
    system("pause");
    return 0;
}
