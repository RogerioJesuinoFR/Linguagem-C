/*9. Escrever um programa que l� o n�mero de identifica��o, as 3 notas obtidas por um aluno em
provas e a m�dia dos exerc�cios (ME) que fazem parte da avalia��o. Calcular a m�dia de
aproveitamento, usando a f�rmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME) / 7
A atribui��o de conceitos obedece a tabela abaixo:
O programa deve escrever o n�mero do aluno, suas notas, a m�dia dos exerc�cios, a m�dia de
aproveitamento, o conceito correspondente e a mensagem: APROVADO se o conceito for A, B ou C
e REPROVADO se o conceito for D ou E. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int IDENT;
    float N1, N2, N3, ME, MA;
    char CONCEITO;
    MA = 0;
    printf("Informe o numero de identificacao:\n");
    scanf("%d", &IDENT);
    printf("Informe as tres notas:\n");
    scanf("%f%f%f", &N1, &N2, &N3);
    printf("Informe a media de exercicios que fazem parte da avaliacao:\n");
    scanf("%f", &ME);
    MA = (N1 + N2*2 + N3*3 + ME)/7;
    if(MA >= 9)
    {
        CONCEITO = 'A';
        printf("O numero de identificacao %d, com as notas %.1f, %.1f, %.1f e media de exercicios %.1f\nteve media de aproveitamento %.1f e tirou conceito %c\n", IDENT, N1, N2, N3, ME, MA, CONCEITO);
        printf("APROVADO!\n");
    }
    else if((MA >= 7.5)&&(MA < 9))
    {
        CONCEITO = 'B';
        printf("O numero de identificacao %d, com as notas %.1f, %.1f, %.1f e media de exercicios %.1f\nteve media de aproveitamento %.1f e tirou conceito %c\n", IDENT, N1, N2, N3, ME, MA, CONCEITO);
        printf("APROVADO!\n");
    }
    else if((MA >= 6)&&(MA < 7.5))
    {
        CONCEITO = 'C';
        printf("O numero de identificacao %d, com as notas %.1f, %.1f, %.1f e media de exercicios %.1f\nteve media de aproveitamento %.1f e tirou conceito %c\n", IDENT, N1, N2, N3, ME, MA, CONCEITO);
        printf("APROVADO!\n");
    }
    else if((MA >= 4)&&(MA < 6))
    {
        CONCEITO = 'D';
        printf("O numero de identificacao %d, com as notas %.1f, %.1f, %.1f e media de exercicios %.1f\nteve media de aproveitamento %.1f e tirou conceito %c\n", IDENT, N1, N2, N3, ME, MA, CONCEITO);
        printf("REPROVADO!\n");
    }
    else
    {
        CONCEITO = 'E';
        printf("O numero de identificacao %d, com as notas %.1f, %.1f, %.1f e media de exercicios %.1f\nteve media de aproveitamento %.1f e tirou conceito %c\n", IDENT, N1, N2, N3, ME, MA, CONCEITO);
        printf("REPROVADO!\n");
    }
    system("pause");
    return 0;
}
