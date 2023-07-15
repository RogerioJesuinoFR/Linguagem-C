/*15. Dado um numero inteiro que representa uma quantidade de segundos, determinar o seu valor equivalente
em horas, minutos e segundos. Se a quantidade de segundos for insuficiente para dar um valor em horas, o
valor em horas deve ser 0 (zero). A mesma observação vale em relação aos minutos e segundos.
Por exemplo: 3.600 segundos = 1 hora, 0 minutos, 0 segundos.
3.500 segundos = 0 horas, 58 minutos e 20 segundos. */

#include <stdio.h>

int main()
{
    int SEGUNDOS, MINUTOS, HORAS;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &SEGUNDOS);
    HORAS = SEGUNDOS / 3600;
    SEGUNDOS = SEGUNDOS % 3600;
    MINUTOS = SEGUNDOS / 60;
    SEGUNDOS = SEGUNDOS % 60;
    printf("%d segundos correspondem a:\n\n %d horas, %d minutos e %d segundos\n", SEGUNDOS + MINUTOS * 60 + HORAS * 3600, HORAS, MINUTOS, SEGUNDOS);
    return 0;
}
