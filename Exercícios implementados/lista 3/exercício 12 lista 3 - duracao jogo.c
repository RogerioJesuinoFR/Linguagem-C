/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo, sabendo que o
mesmo pode come�ar em um dia e terminar em outro, tendo uma dura��o m�xima de 24 horas*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int HORA_INICIAL, HORA_FINAL, DURACAO;

    printf("Digite a hora inicial do jogo:\n");
    scanf("%d", &HORA_INICIAL);

    printf("Digite a hora final do jogo:\n");
    scanf("%d", &HORA_FINAL);

    if (HORA_INICIAL <= HORA_FINAL)
    {
        DURACAO = HORA_FINAL - HORA_INICIAL;
        printf("A duracao do jogo foi de %d horas.\n", DURACAO);
        printf("E terminou no mesmo dia.\n");
    }
    else
    {
        DURACAO = (24 - HORA_INICIAL) + HORA_FINAL;
        printf("A duracao do jogo foi de %d horas.\n", DURACAO);
        printf("E terminou no dia seguinte.\n");
    }
    system("pause");
    return 0;
}
