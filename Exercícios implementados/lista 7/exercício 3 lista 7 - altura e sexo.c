/* Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 5 pessoas. 
Fazer um algoritmo que calcule e escreva: 
a) a maior e a menor altura do grupo;
b) a média de altura das mulheres;
c) o número de homens.*/

#include<stdio.h>

int main()
{
    int CONT = 0, HOMENS = 0, ALTURA = 0, MAIOR_ALT = 0, MENOR_ALT = 300;
    int ALTURA_FEM = 0;
    float MEDIA = 0.0;
    char SEXO;
    
    do
    {
        printf("Informe a altura em centimetros:\n");
        scanf("%d", &ALTURA);
        
        if(ALTURA > MAIOR_ALT)
            MAIOR_ALT = ALTURA;
        if(ALTURA < MENOR_ALT)
            MENOR_ALT = ALTURA;
        
        printf("Digite o sexo:\n\tM - MASCULINO\n\tF - FEMININO\n");
        scanf(" %c", &SEXO);
        
        if(SEXO == 'M'||SEXO == 'm')
            HOMENS++;
        else if(SEXO == 'F'||SEXO == 'f')
        {
            ALTURA_FEM += ALTURA;
            MEDIA++;
        } 
        
        CONT++;
    } while (CONT < 5);

    MEDIA = (float) ALTURA_FEM / MEDIA;
    
    printf("A maior altura do grupo e de %d centimetros.\n", MAIOR_ALT);
    printf("A menor altura do grupo e de %d centimetros.\n", MENOR_ALT);
    printf("A media de altura das mulheres e de %.2f centimetros.\n", MEDIA);
    printf("O grupo tem %d homens.\n", HOMENS);
    
    return 0;
}
