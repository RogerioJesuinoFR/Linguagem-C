/*Fazer um programa para ler a primeira letra do estado civil de uma pessoa (S - solteiro, C -
casado, V- vi�vo, D- divorciado, E - desquitado) e mostrar uma mensagem com a descri��o.
Considere letras mai�sculas e min�sculas. Mostre mensagem de erro, se necess�rio.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char EC;
    printf("Selecione o seu estado civil:\nS - solteiro\nC - casado\nV - viuvo\nD - divorciado\nE - desquitado\n");
    scanf("%c", &EC);
    switch(EC)
    {
        case 'S':
        case 's':
            printf("Solteiro\n");
            break;
        case 'C':
        case 'c':
            printf("Casado\n");
            break;
        case 'V':
        case 'v':
            printf("Viuvo\n");
            break;
        case 'D':
        case 'd':
            printf("Divorciado\n");
            break;
        case 'E':
        case 'e':
            printf("Desquitado\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    system("pause");
    return 0;
}
