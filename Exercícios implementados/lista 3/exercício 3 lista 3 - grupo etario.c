/*3. Faça um algoritmo que leia a idade de uma pessoa e verifique se ela é:
- Criança: Idade de 1 a 13 anos;
- Adolescente: Idade maior que 13 anos e menor ou igual a 20 anos;
- Adulto: Idade maior que 20 e menor ou igual a 50 anos;
- Idosa: idade maior que 50 anos.
Exiba em qual grupo a pessoa se enquadra.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int IDADE;
    printf("Digite sua idade:\n");
    scanf("%d", &IDADE);
    if (IDADE >= 1 && IDADE <= 13)
    {
        printf("Voce e Crianca\n");
    }
    if (IDADE > 13 && IDADE <= 20)
    {
        printf("Voce e Adolescente\n");
    }
    if (IDADE > 20 && IDADE <= 50)
    {
        printf("Voce e Adulto\n");
    }
    if (IDADE > 50)
    {
        printf("Voce e Idoso\n");
    }
    system("pause");
    return 0;
}
