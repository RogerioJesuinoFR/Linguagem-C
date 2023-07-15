/* Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um 
novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim 
ou não). Sabendo-se que foram entrevistadas 10 pessoas, fazer um programa que calcule e 
escreva:
 o número de pessoas que responderam sim;
 o número de pessoas que responderam não;
 a porcentagem de pessoas do sexo feminino que responderam sim;
 a porcentagem de pessoas do sexo masculino que responderam não.*/

#include<stdio.h>

int main()
{
    int CONT_S = 0,  CONT_MASC_S = 0, CONT_FEM_S = 0;
    int CONT_N = 0, CONT_MASC_N = 0, CONT_FEM_N = 0;
    int I = 0, PORC_M = 0, PORC_F = 0;
    char SEXO, RESP;
    while (I < 10)
    {
        printf("Voce gostou do produto:\n\t(S - Sim)\n\t(N - Nao)\n");
        fflush(stdin);
        scanf("%c", &RESP);
        if(RESP == 'S' || RESP == 's')
        {
            printf("Informe o seu sexo:\n\t(M - masculino)\n\t(F - feminino)\n");
            fflush(stdin);
            scanf("%c", &SEXO);
            if(SEXO == 'm' || SEXO == 'M')
                CONT_MASC_S++;
            else if (SEXO == 'f' || SEXO == 'F')
                CONT_FEM_S++;
            CONT_S++;
        }
            
        else if(RESP == 'N' || RESP == 'n')
        {
            printf("Informe o seu sexo:\n\t(M - masculino)\n\t(F - feminino)\n");
            fflush(stdin);
            scanf("%c", &SEXO);
            if(SEXO == 'm' || SEXO == 'M')
                CONT_MASC_N++;
            else if (SEXO == 'f' || SEXO == 'F')
                CONT_FEM_N++;
            CONT_N++;
        }
        PORC_M = (CONT_MASC_N * 100) / 10;
        PORC_F = (CONT_FEM_S * 100) / 10;
        I++;
    }
    printf("O numero de pessoas que responderam sim foi %d\n", CONT_S);
    printf("O numero de pessoas que responderam nao foi %d\n", CONT_N);
    printf("A porcentagem de pessoas do sexo FEMININO que responderam SIM foi de %d por cento\n", PORC_F);
    printf("A porcentagem de pessoas do sexo MASCULINO que responderam NAO foi de %d por cento\n", PORC_M);
    return 0;
}