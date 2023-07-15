/*Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada
do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o
código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média
for maior ou igual a 5 e "REPROVADO" se a média for menor que 5.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int RA;
    float NOTA1, NOTA2, NOTA3, MEDIA, MAIOR_NOTA, OUTRA_NOTA1, OUTRA_NOTA2;
    MAIOR_NOTA = 0;
    OUTRA_NOTA1 = 0;
    OUTRA_NOTA2 = 0;
    printf("Digite o seu RA:\n");
    scanf("%d", &RA);
    printf("Informe a nota da primeira prova:\n");
    scanf("%f", &NOTA1);
    printf("Informe a nota da segunda prova:\n");
    scanf("%f", &NOTA2);
    printf("Informe a nota da terceira prova:\n");
    scanf("%f", &NOTA3);
    if((NOTA1 > NOTA2)&&(NOTA1 > NOTA3))
    {
        MAIOR_NOTA = NOTA1;
        OUTRA_NOTA1 = NOTA2;
        OUTRA_NOTA2 = NOTA3;
    }
    else if((NOTA2 > NOTA1)&&(NOTA2 > NOTA3))
    {
        MAIOR_NOTA = NOTA2;
        OUTRA_NOTA1 = NOTA1;
        OUTRA_NOTA2 = NOTA3;
    }
    else
    {
        MAIOR_NOTA = NOTA3;
        OUTRA_NOTA1 = NOTA1;
        OUTRA_NOTA2 = NOTA2;
    }

    MEDIA = (MAIOR_NOTA * 4 + OUTRA_NOTA1 * 3 + OUTRA_NOTA2 * 3)/(4+3+3);

    printf("RA: %d\n", RA);
    printf("A notas foram: %.1f %.1f %.1f\n", NOTA1, NOTA2, NOTA3);
    printf("A media foi: %.1f\n", MEDIA);

    if (MEDIA >= 5)
        printf("Aluno aprovado!\n\n");
    else
        printf("Aluno reprovado!\n\n");
    system("pause");
    return 0;
}
