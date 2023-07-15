/* Uma determinada biblioteca possui obras de ciências exatas, ciências humanas e ciências
biomédicas, totalizando 1500 obras, sendo 500 de cada área. O proprietário resolveu
informatizá-la e, para tal, agrupou as informações sobre cada livro do seguinte modo:
- Código de Catalogação
- Doado:
- Nome da Obra:
- Nome do Autor:
- Editora:
- Numero de paginas:
a) Construa um programa que declare tal estrutura e reúna todas as informações de todas as obras em
três vetores distintos para cada área.
b) Elabore um trecho de código que, utilizando como premissa o que foi feito no item a, faça uma
consulta as informações. O usuário informará o código da obra e sua área, existindo tal livro, informa
seus campos; do contrário envia uma mensagem de aviso.
c) Idem ao item b porém o usuário informa o nome e a área do livro que deseja consultar.
d) Elabore um trecho de código que faça a alteração de um registro; para tal, o usuário fornece o
código e altera as demais informações sobre o livro. Lembre-se que somente poderá ser excluído um
livro existente.
e) Construa um trecho de código que efetue a exclusão de algum livro; o usuário fornecerá o código e
a área. Lembre-se que somente poderá ser excluído um livro existente.*/

#include<stdio.h>
#include<string.h>
#define TAM 500

struct REG_LIVRO
{
    int CODIGO, NUM_PAG, FLAG;
    char NOME_DA_OBRA[50], NOME_AUTOR[50], EDITORA[50], DOADO[15];
} REG[3][TAM];

void INICIALIZA_FLAG()
{
    int I, J;
    for (I = 0; I < 3; I++)
    {
        for(J = 0; J < TAM; J++)
        {
           REG[I][J].FLAG = 0;
        }
    }

}

int ENCONTRAR_POS_LIVRE(int AREA)
{
    int I;
    for (I = 0; I < TAM; I++)
    {
        if (REG[AREA][I].FLAG == 0)
            return I;
    }
    return -1;
}

void INCLUIR()
{
    int POS, AREA;
    printf("Escolha a area (0 - Ciencias Exatas, 1 - Ciencias Humanas, 2 - Ciencias Biomedicas):\n");
    scanf("%d", &AREA);

    if (AREA < 0 || AREA > 2)
    {
        printf("\nArea invalida.\n");
        return;
    }
    POS = ENCONTRAR_POS_LIVRE(AREA);
    if (POS == -1)
        printf("\nAtingiu o limite suportado de registros. Faca a exclusao de um registro para cadastrar novos.\n");
    else
    {
        printf("CODIGO DE CATALOGACAO: ");
        scanf("%d", &REG[AREA][POS].CODIGO);

        printf("DOADO: ");
        getchar(); // Limpa o caractere de nova linha pendente no buffer
        fgets(REG[AREA][POS].DOADO, sizeof(REG[AREA][POS].DOADO), stdin);
        REG[AREA][POS].DOADO[strcspn(REG[AREA][POS].DOADO, "\n")] = '\0'; // Remove a quebra de linha

        printf("NOME DA OBRA: ");
        fgets(REG[AREA][POS].NOME_DA_OBRA, sizeof(REG[AREA][POS].NOME_DA_OBRA), stdin);
        REG[AREA][POS].NOME_DA_OBRA[strcspn(REG[AREA][POS].NOME_DA_OBRA, "\n")] = '\0';

        printf("NOME DO AUTOR: ");
        fgets(REG[AREA][POS].NOME_AUTOR, sizeof(REG[AREA][POS].NOME_AUTOR), stdin);
        REG[AREA][POS].NOME_AUTOR[strcspn(REG[AREA][POS].NOME_AUTOR, "\n")] = '\0';

        printf("EDITORA: ");
        fgets(REG[AREA][POS].EDITORA, sizeof(REG[AREA][POS].EDITORA), stdin);
        REG[AREA][POS].EDITORA[strcspn(REG[AREA][POS].EDITORA, "\n")] = '\0';

        printf("N DE PAGINAS: ");
        scanf("%d", &REG[AREA][POS].NUM_PAG);

        REG[AREA][POS].FLAG=1;
        printf("\n\nRegistro incluido com sucesso!\n\n");
        fflush(stdin);
    }
}

void ALTERAR()
{
    int I, ACHOU = 0, N_CODIGO, AREA;
    printf("Escolha a area (0 - Ciencias Exatas, 1 - Ciencias Humanas, 2 - Ciencias Biomedicas):\n");
    scanf("%d", &AREA);

    if (AREA < 0 || AREA > 2)
    {
        printf("\nArea invalida.\n");
        return;
    }
    printf("Digite o numero do codigo que deseja alterar:\n\n");
    scanf("%d", &N_CODIGO);
    for (I = 0; I < TAM; I++)
    {
        if ((N_CODIGO == REG[AREA][I].CODIGO) && (REG[AREA][I].FLAG == 1))
        {
            ACHOU = 1;
            printf("\nSelecione o dado que deseja alterar:\n\n");
            printf("1. Codigo de catalogacao\n");
            printf("2. Doado\n");
            printf("3. Nome da obra\n");
            printf("4. Nome do autor\n");
            printf("5. Editora\n");
            printf("6. N de paginas\n");

            int OPCAO;
            scanf("%d", &OPCAO);
            getchar(); // Limpa o caractere de nova linha pendente no buffer

            switch (OPCAO)
            {
            case 1:
                printf("\nDigite o novo codigo: ");
                scanf("%d", &REG[AREA][I].CODIGO);
                break;
            case 2:
                printf("\nDoado: ");
                fgets(REG[AREA][I].DOADO, sizeof(REG[AREA][I].DOADO), stdin);
                REG[AREA][I].DOADO[strcspn(REG[AREA][I].DOADO, "\n")] = '\0';
                break;
            case 3:
                printf("\nDigite o novo nome da obra: ");
                fgets(REG[AREA][I].NOME_DA_OBRA, sizeof(REG[AREA][I].NOME_DA_OBRA), stdin);
                REG[AREA][I].NOME_DA_OBRA[strcspn(REG[AREA][I].NOME_DA_OBRA, "\n")] = '\0';
                break;
            case 4:
                printf("\nDigite o novo nome do autor: ");
                fgets(REG[AREA][I].NOME_AUTOR, sizeof(REG[AREA][I].NOME_AUTOR), stdin);
                REG[AREA][I].NOME_AUTOR[strcspn(REG[AREA][I].NOME_AUTOR, "\n")] = '\0';
                break;
            case 5:
                printf("\nDigite a nova editora: ");
                fgets(REG[AREA][I].EDITORA, sizeof(REG[AREA][I].EDITORA), stdin);
                REG[AREA][I].EDITORA[strcspn(REG[AREA][I].EDITORA, "\n")] = '\0';
                break;
            case 6:
                printf("\nN de Paginas: ");
                scanf("%d", &REG[AREA][I].NUM_PAG);
                break;
            default:
                printf("\nOpcao invalida\n");
                break;
            }
            printf("\nDado alterado com sucesso!\n\n");
            break;
        }
    }
    if (ACHOU == 0)
        printf("\nCodigo nao encontrado\n\n");
}

void EXCLUIR()
{
    int I, ACHOU = 0, N_CODIGO, AREA;
    printf("Escolha a area (0 - Ciencias Exatas, 1 - Ciencias Humanas, 2 - Ciencias Biomedicas):\n");
    scanf("%d", &AREA);

    if (AREA < 0 || AREA > 2)
    {
        printf("\nArea invalida.\n");
        return;
    }
    printf("Digite o codigo que deseja excluir\n\n");
    scanf("%d", &N_CODIGO);
    for (I = 0; I < TAM; I++)
    {
        if ((N_CODIGO == REG[AREA][I].CODIGO) && (REG[AREA][I].FLAG == 1))
        {
            ACHOU = 1;
            REG[AREA][I].FLAG = 0;
            printf("\nRegistro excluido...\n\n");
        }
    }
    if (ACHOU == 0)
        printf("\nCodigo nao encontrado\n\n");
}

void CONSULTAR()
{
    int I, ACHOU = 0, N_CODIGO, AREA, ESCOLHA;
    char NOME[50];
    printf("Escolha a area (0 - Ciencias Exatas, 1 - Ciencias Humanas, 2 - Ciencias Biomedicas):\n");
    scanf("%d", &AREA);

    if (AREA < 0 || AREA > 2)
    {
        printf("\nArea invalida.\n");
        return;
    }
    printf("Selecione como deseja consultar (1 - Consulta pelo nome, 2 - Consulta por codigo:\n");
    scanf("%d", &ESCOLHA);
    if(ESCOLHA < 1 || ESCOLHA > 2)
    {
        printf("\nOpcao invalida.\n");
        return;
    }
    else if(ESCOLHA == 1)
    {
        printf("Digite o nome da obra que deseja consultar\n\n");
        scanf("%s", NOME);
        for (I = 0; I < TAM; I++)
        {
            if ((strcmp(NOME,REG[AREA][I].NOME_DA_OBRA)) && (REG[AREA][I].FLAG == 1))
            {
                ACHOU = 1;
                printf("\nCODIGO %d\n", N_CODIGO);
                printf("DOADO: %s\n", REG[AREA][I].DOADO);
                printf("NOME DA OBRA: %s\n", REG[AREA][I].NOME_DA_OBRA);
                printf("NOME DO AUTOR: %s\n", REG[AREA][I].NOME_AUTOR);
                printf("EDITORA: %s\n", REG[AREA][I].EDITORA);
                printf("N de PAGINAS: %d\n\n", REG[AREA][I].NUM_PAG);
            }
            else
                printf("\nNome nao encontrado\n\n");
        }
    }
    else
    {
       printf("Digite o codigo que deseja consultar\n\n");
        scanf("%d", &N_CODIGO);
        for (I = 0; I < TAM; I++)
        {
            if ((N_CODIGO == REG[AREA][I].CODIGO) && (REG[AREA][I].FLAG == 1))
            {
                ACHOU = 1;
                printf("\nCODIGO %d\n", N_CODIGO);
                printf("DOADO: %s\n", REG[AREA][I].DOADO);
                printf("NOME DA OBRA: %s\n", REG[AREA][I].NOME_DA_OBRA);
                printf("NOME DO AUTOR: %s\n", REG[AREA][I].NOME_AUTOR);
                printf("EDITORA: %s\n", REG[AREA][I].EDITORA);
                printf("N de PAGINAS: %d\n\n", REG[AREA][I].NUM_PAG);
            }
            else
                printf("\nCodigo nao encontrado\n\n");
        }
    }
}

int main()
{
    int OPCAO;
    INICIALIZA_FLAG();
    do
    {
        printf("Escolha a sua opcao:\n\t1 - Incluir\n\t2 - Alterar\t\n\t3 - Excluir\n\t4 - Consultar\n\t5 - Sair\n");
        scanf("%d", &OPCAO);
        printf("\n");
        switch (OPCAO)
        {
        case 1:
            INCLUIR();
            break;
        case 2:
            ALTERAR();
            break;
        case 3:
            EXCLUIR();
            break;
        case 4:
            CONSULTAR();
            break;
        case 5:
            printf("\nEncerrando o programa\n");
            break;
        default:
            printf("\nOpcao invalida\n");
        }

    } while (OPCAO != 5);

    return 0;
}
