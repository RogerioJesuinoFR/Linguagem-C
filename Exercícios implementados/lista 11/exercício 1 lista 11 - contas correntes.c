/* Com o modelo de registro a seguir, construa o programa relacionado à administração de
contas correntes em um banco, inserindo informações até quando o usuário desejar.
Crie um programa que efetue as operações:
1. Inclusão;
2. Alteração;
3. Exclusão;
- Consulta por conta corrente.*/

#include<stdio.h>
#include<string.h>
#define TAM 40

struct REG_CONTA
{
    int CONTA, AGENCIA, FLAG;
    char CORRENTISTA[50], DATA[11], CIDADE[30], ESTADO[20];
    float SALDO;
}CONTA[TAM];

void INICIALIZA_FLAG()
{
    int I;
    for(I=0; I< TAM; I++)
        CONTA[I].FLAG = 0;
}

int ENCONTRAR_POS_LIVRE()
{
    int I;
    for(I=0; I< TAM; I++)
    {
        if (CONTA[I].FLAG == 0)
            return I;
    }
    return -1;

}

void INCLUIR()
{
    int POS;
    POS = ENCONTRAR_POS_LIVRE();
    if (POS == -1)
        printf("\nAtingiu o Limite suportado de contas correntes, faça a exclusão de uma conta para que possa cadastrar novas\n");
    else
    {
        printf("Digite o numero da conta\n");
        scanf("%d", &CONTA[POS].CONTA);
        printf("Digite o nome do correntista\n");
        fflush(stdin);
        gets(CONTA[POS].CORRENTISTA);
        printf("Digite a data de abertura da conta (00/00/0000)\n");
        fflush(stdin);
        gets(CONTA[POS].DATA);
        printf("Digite o numero da agencia\n");
        scanf("%d", &CONTA[POS].AGENCIA);
        printf("Digite a cidade da agencia\n");
        fflush(stdin);
        gets(CONTA[POS].CIDADE);
        printf("Digite o estado da agencia (Ex: SP)\n");
        fflush(stdin);
        gets(CONTA[POS].ESTADO);
        printf("Digite o saldo da conta\nR$");
        scanf("%f", &CONTA[POS].SALDO);
        CONTA[POS].FLAG=1;
        printf("\nConta incluida com sucesso!\n\n");
    }
}


void ALTERAR()
{
    int I, ACHOU = 0, N_CONTA;
    printf("Digite o numero da conta que voce deseja alterar:\n\n");
    scanf("%d", &N_CONTA);
    for (I = 0; I < TAM; I++)
    {
        if ((N_CONTA == CONTA[I].CONTA) && (CONTA[I].FLAG == 1))
        {
            ACHOU = 1;
            printf("\nSelecione o dado que deseja alterar:\n\n");
            printf("1. Nome do correntista\n");
            printf("2. Data de abertura da conta\n");
            printf("3. Numero da agencia\n");
            printf("4. Cidade da agencia\n");
            printf("5. Estado da agencia\n");
            printf("6. Saldo da conta\n");
            int OPCAO;
            scanf("%d", &OPCAO);
            switch (OPCAO)
            {
            case 1:
                printf("\nDigite o novo nome do correntista: ");
                scanf(" %[^\n]s", CONTA[I].CORRENTISTA);
                break;
            case 2:
                printf("\nDigite a nova data de abertura da conta (00/00/0000): ");
                scanf(" %[^\n]s", CONTA[I].DATA);
                break;
            case 3:
                printf("\nDigite o novo numero da agencia: ");
                scanf("%d", &CONTA[I].AGENCIA);
                break;
            case 4:
                printf("\nDigite a nova cidade da agencia: ");
                scanf(" %[^\n]s", CONTA[I].CIDADE);
                break;
            case 5:
                printf("\nDigite o novo estado da agencia (Ex: SP): ");
                scanf(" %[^\n]s", CONTA[I].ESTADO);
                break;
            case 6:
                printf("\nDigite o novo saldo da conta: R$");
                scanf("%f", &CONTA[I].SALDO);
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
        printf("\nConta nao encontrada\n\n");
}

void EXCLUIR()
{
    int I, ACHOU=0, N_CONTA;
    printf("Digite o numero da conta que voce deseja excluir\n\n");
    scanf("%d", &N_CONTA);
    for(I=0; I< TAM; I++)
    {
        if((N_CONTA == CONTA[I].CONTA) && (CONTA[I].FLAG==1))
        {
            ACHOU = 1;
            CONTA[I].FLAG = 0;
            printf("\nRegistro excluido...\n\n");
        }
    }
    if(ACHOU == 0)
        printf("\nConta nao encontrada\n\n");
}

void CONSULTAR()
{
    int I, ACHOU = 0, N_CONTA;
    printf("Digite o numero da conta que voce deseja consultar\n\n");
    scanf("%d", &N_CONTA);
    for(I=0; I< TAM; I++)
    {
        if((N_CONTA == CONTA[I].CONTA) && (CONTA[I].FLAG==1))
        {
            ACHOU = 1;
            printf("\nCONTA %d\nCORRENTISTA: %s\n", N_CONTA,CONTA[I].CORRENTISTA);
            printf("DATA DE ABERTURA: %s\n",CONTA[I].DATA);
            printf("AGENCIA: %d CIDADE: %s ESTADO: %s\n",CONTA[I].AGENCIA, CONTA[I].CIDADE, CONTA[I].ESTADO);
            printf("SALDO DA CONTA: %.2f Reais\n\n",CONTA[I].SALDO);
        }
    }
    if(ACHOU == 0)
        printf("\nConta nao encontrada\n\n");
}

int main()
{
    int OPCAO;
    INICIALIZA_FLAG();
    do
    {
        printf("Escolha a sua opcao:\n\t1- Incluir\n\t2 - Alterar\t\n\t3 - Excluir\n\t4 - Consultar\n\t5 - Sair\n");
        scanf("%d", &OPCAO);
        printf("\n");
        switch(OPCAO)
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

    }while(OPCAO !=5);
    return 0;
}
