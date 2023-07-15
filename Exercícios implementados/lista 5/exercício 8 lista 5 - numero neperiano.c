/*Sabe-se que o número Neperiano e = 2.7182818 ... (que é um número irracional) pode ser
calculado pela soma dos valores de uma série infinita, como mostrado abaixo:
Fazer um programa em C que calcule este número (e) considerando apenas as 15 (quinze) primeiras
parcelas.*/

#include <stdio.h>
#include <stdlib.h>

int DENOMINADOR(int DEN)
{
    int RES;
    RES = 1;
    while (DEN > 0)
    {
        RES *= DEN;
        DEN--;
    }
    return RES;
}

int main()
{
    int NUMERADOR, DEN;
    float NEP;
    NUMERADOR = 1;
    DEN = 1;
    NEP = 0.0;
    while (DEN <= 15)
    {
        NEP += (float) NUMERADOR/DENOMINADOR(DEN);
        DEN++;
    }
    printf("O valor do numero neperiano e: %f\n", NEP);
    system("pause");
    return 0;
}
