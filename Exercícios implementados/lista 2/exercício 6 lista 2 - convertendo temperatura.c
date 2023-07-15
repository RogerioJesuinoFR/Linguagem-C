/*Faça um programa em linguagem C no qual o usuário forneça uma temperatura em grau Celsius e
o mesmo converta em Fahrenheit. Caso a temperatura seja fornecida em Fahrenheit converta para
grau Celsius. Utilize funções para os cálculos.*/

#include<stdio.h>
#include<stdlib.h>

float CONVERTER_PARA_F(float T)
{
    float TEMP_F;
    TEMP_F = T*1.8 + 32;
    return TEMP_F;
}

float CONVERTER_PARA_C(float T)
{
   float TEMP_C;
   TEMP_C = (T - 32)/1.8;
   return TEMP_C;
}

int main()
{
    char OPCAO;
    float T;
    printf("Digite o valor da temperatura:\n");
    scanf("%f", &T);
    printf("\n\nEscolha a unidade de medida:\nC - celsius\nF - fahrenheit\n\n");
    fflush(stdin);
    scanf("%c", &OPCAO);
    switch (OPCAO)
    {
        case 'C':
        case 'c':
            printf("O valor em Fahrenheit e:\n%.1f\n", CONVERTER_PARA_F(T));
            break;
        case 'F':
        case 'f':
            printf("O valor em Celsius e:\n%.1f\n", CONVERTER_PARA_C(T));
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    system("pause");
    return 0;
}
