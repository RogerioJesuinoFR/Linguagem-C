/*12. Escreva um programa que leia dois números que deverão ser colocados, respectivamente, nas variáveis
VA e VB. O programa deve, então, trocar os valores de VA por VB e vice-versa e mostrar o conteúdo
destas variáveis. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float VA, VB, AUXILIAR;
    printf("Digite o primeiro numero:\n");
    scanf("%f", &VA);
    printf("Digite o segundo numero:\n");
    scanf("%f", &VB);
    AUXILIAR = VA;
    VA = VB;
    VB = AUXILIAR;
    printf("O valor de VA: %.1f e o valor de VB: %.1f", VA, VB);
    return 0;
}
