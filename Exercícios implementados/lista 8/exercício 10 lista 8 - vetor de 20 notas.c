/* Escreva um programa para ler 20 notas e armazená-las em um vetor. Admitindo-se que podem 
haver erros no processo de digitação, algumas notas podem ser inválidas, isto é, fora do intervalo 
entre 0 e 10. Considere a média como sendo 7,0. Desenvolver módulos (procedimentos ou 
funções) para determinar o número de notas inválidas, a média das notas válidas e número de 
notas acima da média.*/

#include <stdio.h>

void VERIFICANDO_NOTAS_INVALIDAS(int NOTAS[], int Z, int NOTAS_INVALIDAS[]) 
{
    int I;
    
    for (I = 1; I <= Z; I++) 
    {
        if (NOTAS[I] < 0 || NOTAS[I] > 10)
            NOTAS_INVALIDAS[I] = NOTAS[I];
    }
}

float CALCULAR_MEDIA_VALIDAS(int NOTAS[], int CONT_VALIDAS) 
{
    float MEDIA = 0.0;
    
    for (int i = 1; i <= CONT_VALIDAS; i++) 
        MEDIA += NOTAS[i];
    
    MEDIA /= CONT_VALIDAS;
    
    return MEDIA;
}

int main() 
{
    int NOTAS[20], NOTAS_INVALIDAS[20], CONT_VALIDAS = 0, ACIMA_DA_MEDIA = 0, CONT;
    
    for (CONT = 1; CONT <= 20; CONT++) 
    {
        printf("Digite a nota %d: ", CONT);
        scanf("%d", &NOTAS[CONT]);
    }
    
    VERIFICANDO_NOTAS_INVALIDAS(NOTAS, 20, NOTAS_INVALIDAS);
    
    for (CONT = 1; CONT <= 20; CONT++) 
    {
        if (NOTAS[CONT] > 0 && NOTAS[CONT] < 10) 
            CONT_VALIDAS++;
    }
    
    float MEDIA_VALIDAS = CALCULAR_MEDIA_VALIDAS(NOTAS, CONT_VALIDAS);

    for (CONT = 1; CONT <= 20; CONT++)
    {
        if(NOTAS[CONT] >=  7 && NOTAS[CONT] > 0 && NOTAS[CONT] < 10)
            ACIMA_DA_MEDIA++;
    }
    
    
    printf("Numero de notas invalidas: %d\n", CONT - CONT_VALIDAS);
    printf("Media das notas validas: %.2f\n", MEDIA_VALIDAS);
    printf("Numero de notas acima da media: %d\n", ACIMA_DA_MEDIA);
    
    return 0;
}
