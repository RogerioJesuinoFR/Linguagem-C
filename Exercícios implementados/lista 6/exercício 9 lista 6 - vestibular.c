/* Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para cada 
curso, é fornecido o seguinte conjunto de valores:
• o código do curso
• número de vagas
• número de candidatos do sexo masculino
• número de candidatos do sexo feminino
• O último conjunto, para indicar fim de dados, contém o código do curso igual a zero.
Fazer um programa que calcule e escreva, para cada curso, o número de candidatos por vaga e a 
porcentagem de candidatos do sexo feminino (escreva também o código correspondente do 
curso).*/

#include <stdio.h>

int main() {
    int CODIGO, VAGAS, CANDIDATOS_MASCULINO, CANDIDATOS_FEMININO;
    float CANDIDATOS_POR_VAGA, PERCENTUAL_FEMININO;

    printf("Informe os dados do concurso vestibular:\n");

    while (1) 
    {
        printf("Codigo do curso (ou 0 para sair):\n");
        scanf("%d", &CODIGO);

        if (CODIGO == 0)
            break;

        printf("Numero de vagas:\n");
        scanf("%d", &VAGAS);

        printf("Numero de candidatos do sexo masculino:\n");
        scanf("%d", &CANDIDATOS_MASCULINO);

        printf("Numero de candidatos do sexo feminino:\n");
        scanf("%d", &CANDIDATOS_FEMININO);

        CANDIDATOS_POR_VAGA = (float)(CANDIDATOS_MASCULINO + CANDIDATOS_FEMININO) / VAGAS;
        PERCENTUAL_FEMININO = (float)CANDIDATOS_FEMININO / (CANDIDATOS_MASCULINO + CANDIDATOS_FEMININO) * 100;

        printf("Codigo do curso: %d\n", CODIGO);
        printf("Numero de candidatos por vaga: %.2f\n", CANDIDATOS_POR_VAGA);
        printf("Porcentagem de candidatos do sexo feminino: %.2f%%\n", PERCENTUAL_FEMININO);
    }

    printf("Encerrando o programa...\n");

    return 0;
}
