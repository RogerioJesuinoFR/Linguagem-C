/* Com o modelo de registro a seguir, construa o programa relacionado a registro de clientes de
uma locadora. Insira 30 registros de clientes dessa locadora.*/

#include <stdio.h>
#include <string.h>

#define TAM 30

struct REG_LOCADORA
{
    int CODIGO, FLAG;
    char NOME[50], ENDERECO[100], GENERO[30], TELEFONE[18], RG[30], CPF[20];
    float DESCONTO;
} REG[TAM];

void INICIALIZA_FLAG()
{
    int I;
    for (I = 0; I < TAM; I++)
        REG[I].FLAG = 0;
}

int ENCONTRAR_POS_LIVRE()
{
    int I;
    for (I = 0; I < TAM; I++)
    {
        if (REG[I].FLAG == 0)
            return I;
    }
    return -1;
}

void INCLUIR()
{
    int POS;
    POS = ENCONTRAR_POS_LIVRE();
    if (POS == -1)
        printf("\nAtingiu o limite suportado de registros. Faca a exclusao de um registro para cadastrar novos.\n");
    else
    {
        printf("Digite o codigo: ");
        scanf("%d", &REG[POS].CODIGO);

        printf("Digite o telefone: ");
        getchar(); // Limpa o caractere de nova linha pendente no buffer
        fgets(REG[POS].TELEFONE, sizeof(REG[POS].TELEFONE), stdin);
        REG[POS].TELEFONE[strcspn(REG[POS].TELEFONE, "\n")] = '\0'; // Remove a quebra de linha

        printf("Digite o nome: ");
        fgets(REG[POS].NOME, sizeof(REG[POS].NOME), stdin);
        REG[POS].NOME[strcspn(REG[POS].NOME, "\n")] = '\0';

        printf("Digite o endereco: ");
        fgets(REG[POS].ENDERECO, sizeof(REG[POS].ENDERECO), stdin);
        REG[POS].ENDERECO[strcspn(REG[POS].ENDERECO, "\n")] = '\0';

        printf("Digite o numero do RG: ");
        fgets(REG[POS].RG, sizeof(REG[POS].RG), stdin);
        REG[POS].RG[strcspn(REG[POS].RG, "\n")] = '\0';

        printf("Digite o numero do CPF: ");
        fgets(REG[POS].CPF, sizeof(REG[POS].CPF), stdin);
        REG[POS].CPF[strcspn(REG[POS].CPF, "\n")] = '\0';

        printf("Digite o genero preferido: ");
        fgets(REG[POS].GENERO, sizeof(REG[POS].GENERO), stdin);
        REG[POS].GENERO[strcspn(REG[POS].GENERO, "\n")] = '\0';

        printf("Digite o desconto: ");
        scanf("%f", &REG[POS].DESCONTO);

        REG[POS].FLAG=1;
        printf("\nRegistro incluido com sucesso!\n\n");
        fflush(stdin);
    }
}

void ALTERAR()
{
    int I, ACHOU = 0, N_CODIGO;
    printf("Digite o numero do codigo que deseja alterar:\n\n");
    scanf("%d", &N_CODIGO);
    for (I = 0; I < TAM; I++)
    {
        if ((N_CODIGO == REG[I].CODIGO) && (REG[I].FLAG == 1))
        {
            ACHOU = 1;
            printf("\nSelecione o dado que deseja alterar:\n\n");
            printf("1. Telefone\n");
            printf("2. Nome\n");
            printf("3. Endereco\n");
            printf("4. RG\n");
            printf("5. CPF\n");
            printf("6. Genero preferido\n");
            printf("7. Desconto\n");
            printf("8. Codigo\n");

            int OPCAO;
            scanf("%d", &OPCAO);
            getchar(); // Limpa o caractere de nova linha pendente no buffer

            switch (OPCAO)
            {
            case 1:
                printf("\nDigite o novo numero de telefone: ");
                fgets(REG[I].TELEFONE, sizeof(REG[I].TELEFONE), stdin);
                REG[I].TELEFONE[strcspn(REG[I].TELEFONE, "\n")] = '\0';
                break;
            case 2:
                printf("\nDigite o novo nome: ");
                fgets(REG[I].NOME, sizeof(REG[I].NOME), stdin);
                REG[I].NOME[strcspn(REG[I].NOME, "\n")] = '\0';
                break;
            case 3:
                printf("\nDigite o novo endereco: ");
                fgets(REG[I].ENDERECO, sizeof(REG[I].ENDERECO), stdin);
                REG[I].ENDERECO[strcspn(REG[I].ENDERECO, "\n")] = '\0';
                break;
            case 4:
                printf("\nDigite o novo numero de RG: ");
                fgets(REG[I].RG, sizeof(REG[I].RG), stdin);
                REG[I].RG[strcspn(REG[I].RG, "\n")] = '\0';
                break;
            case 5:
                printf("\nDigite o novo numero de CPF: ");
                fgets(REG[I].CPF, sizeof(REG[I].CPF), stdin);
                REG[I].CPF[strcspn(REG[I].CPF, "\n")] = '\0';
                break;
            case 6:
                printf("\nDigite o novo genero preferido: ");
                fgets(REG[I].GENERO, sizeof(REG[I].GENERO), stdin);
                REG[I].GENERO[strcspn(REG[I].GENERO, "\n")] = '\0';
                break;
            case 7:
                printf("\nDigite o novo desconto: ");
                scanf("%f", &REG[I].DESCONTO);
                break;
            case 8:
                printf("\nDigite o novo codigo: ");
                scanf("%d", &REG[I].CODIGO);
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
    int I, ACHOU = 0, N_CODIGO;
    printf("Digite o codigo que deseja excluir\n\n");
    scanf("%d", &N_CODIGO);
    for (I = 0; I < TAM; I++)
    {
        if ((N_CODIGO == REG[I].CODIGO) && (REG[I].FLAG == 1))
        {
            ACHOU = 1;
            REG[I].FLAG = 0;
            printf("\nRegistro excluido...\n\n");
        }
    }
    if (ACHOU == 0)
        printf("\nCodigo nao encontrado\n\n");
}

void CONSULTAR()
{
    int I, ACHOU = 0, N_CODIGO;
    printf("Digite o codigo que deseja consultar\n\n");
    scanf("%d", &N_CODIGO);
    for (I = 0; I < TAM; I++)
    {
        if ((N_CODIGO == REG[I].CODIGO) && (REG[I].FLAG == 1))
        {
            ACHOU = 1;
            printf("\nCODIGO %d   TELEFONE: %s\n", N_CODIGO, REG[I].TELEFONE);
            printf("NOME: %s\n", REG[I].NOME);
            printf("ENDERECO: %s\n", REG[I].ENDERECO);
            printf("RG: %s   CPF: %s\n", REG[I].RG, REG[I].CPF);
            printf("GENERO PREFERIDO: %s   DESCONTO: %.1f\n\n", REG[I].GENERO, REG[I].DESCONTO);
        }
    }
    if (ACHOU == 0)
        printf("\nCodigo nao encontrado\n\n");
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

