/*Fazer um programa para calcular o salário líquido de um funcionário com base na seguinte
fórmula:
SALARIO LIQUIDO=SALARIO BRUTO+PROVENTOS-DESCONTO
Devem ser respeitadas as seguintes condições para cálculo do desconto:
- Salário Bruto <=50, desconto de 5%;
- Salário Bruto > 50, desconto de 10 %*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float SALARIO_B, PROVENTOS, DESCONTO, SALARIO_L;
    printf("Digite o valor do salario bruto:\n");
    scanf("%f", &SALARIO_B);
    printf("Digite o valor dos proventos:\n");
    scanf("%f", &PROVENTOS);
    if (SALARIO_B <= 50)
    {
        DESCONTO = (SALARIO_B*5)/100;
        SALARIO_L = SALARIO_B + PROVENTOS - DESCONTO;
        printf("O valor do salario liquido e: %.2f\n", SALARIO_L);
    }
    if (SALARIO_B > 50)
    {
        DESCONTO = (SALARIO_B*10)/100;
        SALARIO_L = SALARIO_B + PROVENTOS - DESCONTO;
        printf("O valor do salario liquido e: %.2f\n", SALARIO_L);
    }
    system("pause");
    return 0;
}
