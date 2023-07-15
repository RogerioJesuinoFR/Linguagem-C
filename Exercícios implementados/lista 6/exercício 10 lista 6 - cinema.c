/* Um cinema que possui capacidade de 100 lugares está sempre com ocupação total. Certo dia 
cada espectador respondeu a um questionário, no qual constava:
- sua idade;
- sua opinião em relação ao filme, segundo:
ótimo= *****
bom= ****
regular= ***
ruim= **
péssimo= *
Elabore um programa que, lendo estes dados, calcule e imprima:
 a quantidade de respostas ótimo;
 a diferença percentual entre respostas bom e regular;
 a média de idade das pessoas que responderam ruim;
 a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
 a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu 
ruim.*/

#include <stdio.h>

int main()
{
    int IDADE, OPINIAO, QUANTIDADE_OTIMO = 0, QUANTIDADE_BOM = 0, QUANTIDADE_REGULAR = 0, QUANTIDADE_RUIM = 0, QUANTIDADE_PESSIMO = 0;
    int MAIOR_IDADE_OTIMO = 0, MAIOR_IDADE_RUIM = 0, SOMA_IDADE_RUIM = 0, CONTADOR_RUIM = 0, CONT = 0;
    float DIFERENCA_PERCENTUAL, MEDIA_IDADE_RUIM, PERCENTUAL_PESSIMO;

    printf("Informe as respostas dos espectadores:\n");

    while (CONT < 10) 
    {
        printf("Idade: ");
        scanf("%d", &IDADE);

        printf("Opiniao em relacao ao filme (Digite: 5 - otimo, 4 - bom, 3 - regular, 2 - ruim, 1 - pessimo): ");
        scanf("%d", &OPINIAO);

        if (OPINIAO == 5) 
        {
            QUANTIDADE_OTIMO++;
            if (IDADE > MAIOR_IDADE_OTIMO) 
                MAIOR_IDADE_OTIMO = IDADE;
        } 

        else if (OPINIAO == 4) 
            QUANTIDADE_BOM++;

        else if (OPINIAO == 3) 
        {
            QUANTIDADE_REGULAR++;
        } 
        else if (OPINIAO == 2) 
        {
            QUANTIDADE_RUIM++;
            SOMA_IDADE_RUIM += IDADE;
            CONTADOR_RUIM++;
            if (IDADE > MAIOR_IDADE_RUIM) 
                MAIOR_IDADE_RUIM = IDADE;

        } 
        else if (OPINIAO == 1) 
        {
            QUANTIDADE_PESSIMO++;
            if (IDADE > MAIOR_IDADE_RUIM)
                MAIOR_IDADE_RUIM = IDADE;
        }
        CONT++;
    }

    DIFERENCA_PERCENTUAL = (float)(QUANTIDADE_BOM - QUANTIDADE_REGULAR) / QUANTIDADE_REGULAR * 100;
    MEDIA_IDADE_RUIM = (float)SOMA_IDADE_RUIM / CONTADOR_RUIM;
    PERCENTUAL_PESSIMO = (float)QUANTIDADE_PESSIMO / 10 * 100;
    int DIFERENCA_IDADE = MAIOR_IDADE_OTIMO - MAIOR_IDADE_RUIM;

    printf("Quantidade de respostas otimo: %d\n", QUANTIDADE_OTIMO);
    printf("Diferenca percentual entre respostas bom e regular: %.2f%%\n", DIFERENCA_PERCENTUAL);
    printf("Media de idade das pessoas que responderam ruim: %.2f\n", MEDIA_IDADE_RUIM);
    printf("Percentagem de respostas pessimo: %.2f%%\n", PERCENTUAL_PESSIMO);
    printf("Maior idade que utilizou a opcao pessimo: %d\n", MAIOR_IDADE_RUIM);
    printf("Diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d\n", DIFERENCA_IDADE);

    return 0;
}
