/*Fazer um programa que calcule o volume de uma esfera em função do raio R. O raio deverá 
variar de 0 a 20 cm de 0.5 em 0.5cm.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float RAIO = 0.00, VOL = 0.00, PI = 3.14;
    while (RAIO <= 20.00)
    {
        printf("A esfera de raio %.2f", RAIO);
        VOL = (4/3 * PI) * (pow(RAIO, 3));
        printf(" tera volume de %.2f centimetros cubicos\n", VOL);
        RAIO = RAIO + 0.50;
    }
    system("pause");
    return 0;
}