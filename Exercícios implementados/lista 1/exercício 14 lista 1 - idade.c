/*13. 14. Desenvolva uma aplicação que receba a idade de um indivíduo em dias e mostre-a expressa em anos,
meses e dias.*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int IDADE_DIAS, ANOS, MESES, DIAS;
    printf("Digite a idade em dias: \n");
    scanf("%d", &IDADE_DIAS);
    ANOS = IDADE_DIAS / 365;
    IDADE_DIAS %= 365;
    MESES = IDADE_DIAS / 30;
    IDADE_DIAS %= 30;
    DIAS = IDADE_DIAS;
    printf("Idade: %d anos, %d meses e %d dias\n", ANOS, MESES, DIAS);
    return 0;
}

