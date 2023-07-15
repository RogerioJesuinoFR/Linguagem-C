/*. Elabore um algoritmo que, apresente um menu, com as seguintes op��es:
a. Calcular a m�dia aritm�tica
b. Calcular a m�dia harm�nica
c. Calcular a m�dia geom�trica.
Conforme a op��o do usu�rio realize a opera��o selecionada*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MEDIA_ARITMETICA()
{
    float N1, N2, N3, RES;
    printf("Informe os 3 numeros:\n");
    scanf("%f%f%f", &N1, &N2, &N3);
    RES = (N1 + N2 + N3)/3;
    printf("A media aritmetica e: %.1f\n", RES);
}

void MEDIA_HARMONICA()
{
    float NU1, NU2, NU3, RES;
    printf("Informe os 3 numeros:\n");
    scanf("%f%f%f", &NU1, &NU2, &NU3);
    RES = 3 / ((1/NU1) + (1/NU2) + (1/NU3));
    printf("A media harmonica e: %.1f\n", RES);
}

void MEDIA_GEOMETRICA()
{
    float NUM1, NUM2, NUM3, RES;
    printf("Informe os 3 numeros:\n");
    scanf("%f%f%f", &NUM1, &NUM2, &NUM3);
    RES = pow((NUM1*NUM2*NUM3), 1/3);
    printf("A media geometrica e: %.1f\n", RES);
}

int main()
{
    char ESCOLHA;
    printf("Escolha uma opcao:\nA - Calcular a media aritmetica\nB - Calcular a media harmonica\nC - Calcular a media geometrica\n");
    scanf("%c", &ESCOLHA);
    switch(ESCOLHA)
    {
        case 'A':
        case 'a':
            MEDIA_ARITMETICA();
            break;
        case 'B':
        case 'b':
            MEDIA_HARMONICA();
            break;
        case 'C':
        case 'c':
            MEDIA_GEOMETRICA();
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    system("pause");
    return 0;
}
