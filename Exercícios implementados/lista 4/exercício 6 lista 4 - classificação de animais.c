/*Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi escolhido
através de perguntas e respostas. Animais possíveis: leão, cavalo, homem, macaco avestruz
pinguim e pato. Utilize a estrutura de múltipla escolha e a seguinte classificação:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ESCOLHA1, ESCOLHA2, ESCOLHA3;
    printf("O Animal e:\n\t1 - Mamifero\n\t2 - Ave\n");
    scanf("%d", &ESCOLHA1);
    switch (ESCOLHA1)
    {
        case 1:
            printf("O Animal e:\n\t1 - Quadrupede\n\t2 - Bipede\n");
            scanf("%d", &ESCOLHA2);
            switch (ESCOLHA2)
            {
                case 1:
                    printf("O Animal e:\n\t1 - Carnivoro\n\t2 - Herbivoro\n");
                    scanf("%d", &ESCOLHA3);
                    switch (ESCOLHA3)
                    {
                        case 1:
                            printf("O Animal e um Leao\n");
                            break;
                        case 2:
                            printf("O Animal e um Cavalo\n");
                            break;
                        default:
                            printf("Opcao invalida!\n");
                            break;
                    }
                    break;
                case 2:
                    printf("O animal e:\n\t1 - Onivoro\n\t2 - Frutifero\n");
                    scanf("%d", &ESCOLHA3);
                    switch (ESCOLHA3)
                    {
                        case 1:
                            printf("O Animal e um Homem\n");
                            break;
                        case 2:
                            printf("O Animal e um Macaco\n");
                            break;
                        default:
                            printf("Opcao invalida!\n");
                            break;
                    }
                    break;
                default:
                    printf("Opcao invalida!\n");
                    break;
            }
            break;
        case 2:
            printf("O Animal e:\n\t1 - Nao-voadora\n\t2 - Nadadora\n");
            scanf("%d", &ESCOLHA2);
            switch (ESCOLHA2)
            {
                case 1:
                    printf("O Animal e:\n\t1 - Tropical\n\t2 - Polar\n");
                    scanf("%d", &ESCOLHA3);
                    switch (ESCOLHA3)
                    {
                        case 1:
                            printf("O Animal e um Avestruz\n");
                            break;
                        case 2:
                            printf("O Animal e um Penguin\n");
                            break;
                        default:
                            printf("Opcao invalida!\n");
                            break;
                    }
                    break;
                case 2:
                    printf("O animal e um Pato\n");
                    break;
                default:
                    printf("Opcao invalida!\n");
                    break;
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    return 0;
}
