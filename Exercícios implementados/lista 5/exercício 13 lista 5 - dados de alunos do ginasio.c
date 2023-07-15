/*Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginásio de uma determinada
escola. Cada aluno fornecia a sua série (primeira-1, segunda-2, terceira-3 ou quarta-4), quantos
livros liam por mês e se gostavam de fazer redação (Sim-1 ou Não-0). Fazer um programa que
leia os dados, calcule e imprima:
1. A quantidade de alunos que está na terceira série;
2. A maior quantidade de livros lidos por um aluno que está na quarta série;
3. A porcentagem de alunos que não gostam de fazer redação e que estão na terceira série*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int SERIE, LIVROS, REDACAO;
    int ALUNOS_SEGUNDA = 0;
    int MAX_LIVROS_TERCEIRA = 0;
    int ALUNOS_NAO_GOSTAM_REDACAO_SEGUNDA = 0;
    int TOTAL_ALUNOS = 0;

    printf("Digite os dados dos alunos (Digite -1 para encerrar):\n");

    while (1)
    {
        printf("Serie (1 - primeira, 2 - segunda, 3 - terceira): ");
        scanf("%d", &SERIE);

        if (SERIE == -1)
        {
            break;
        }

        printf("Quantidade de livros lidos por mes: ");
        scanf("%d", &LIVROS);

        printf("Gosta de fazer redacao? (1 - Sim, 0 - Nao): ");
        scanf("%d", &REDACAO);

        if (SERIE == 2)
        {
            ALUNOS_SEGUNDA++;
            if (REDACAO == 0)
            {
                ALUNOS_NAO_GOSTAM_REDACAO_SEGUNDA++;
            }
        }

        if (SERIE == 3 && LIVROS > MAX_LIVROS_TERCEIRA)
        {
            MAX_LIVROS_TERCEIRA = LIVROS;
        }

        TOTAL_ALUNOS++;
    }

    float PORCENTAGEM_NAO_GOSTAM_REDACAO_SEGUNDA = (float)ALUNOS_NAO_GOSTAM_REDACAO_SEGUNDA / ALUNOS_SEGUNDA * 100;

    printf("Quantidade de alunos na segunda serie: %d\n", ALUNOS_SEGUNDA);
    printf("Maior quantidade de livros lidos por um aluno na terceira serie: %d\n", MAX_LIVROS_TERCEIRA);
    printf("Porcentagem de alunos que nao gostam de fazer redacao e estao na segunda serie: %.2f%%\n", PORCENTAGEM_NAO_GOSTAM_REDACAO_SEGUNDA);

    return 0;
}
