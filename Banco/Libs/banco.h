#include "conta.h"
#include "cliente.h"

int idConta=0;

void adicionarConta(int idCliente)
{
    if(conta[idCliente].ativa==0)
    {
        conta[idCliente].numero=idCliente;
        conta[idCliente].saldo=0;
        strcpy(conta[idCliente].dataAbertura, "12/11/2019");
        conta[idCliente].ativa=1;

        printf("\nConta cadastrada com sucesso! \nNome: %s\nCPF: %s\nTelefone: %s\nID: %i\nSaldo: R$%.2f\nCheque Especial: R$%.2f\nData de Abertura: %s", 
        cliente[idCliente].nome, cliente[idCliente].cpf, cliente[idCliente].telefone, idCliente, conta[idCliente].saldo, conta[idCliente].chequeEspecial, conta[idCliente].dataAbertura);

        idConta++;
    }
    else
    {
        printf("Erro: Conta ja cadastrada.");
    }
}

void listarContas()
{
    printf("\n=========================");  
    for (int i=0;i<100;i++)
    {
        if(strcmp(cliente[i].nome, "")!=0&&conta[i].ativa==1) 
        {
            if (i>=1) printf("\n------------------------"); 
            printf("\nNome: %s", cliente[i].nome);
            printf("\nCPF: %s", cliente[i].cpf);
            printf("\nTelefone: %s", cliente[i].telefone);
            printf("\nID: %i", cliente[i].id);
            printf("\nSaldo: R$%.2f", conta[i].saldo);
            printf("\nCheque Especial: R$%.2f", conta[i].chequeEspecial);
            printf("\nData de Abertura: %s", conta[i].dataAbertura);
        }
    }
    printf("\n===========FIM===========");  
}

void imprimirConta(int idCliente)
{
    for (int i=0;i<100;i++)
    {
        if(idCliente==conta[i].numero) 
        {        
            printf("\nNome: %s", cliente[i].nome);
            printf("\nCPF: %s", cliente[i].cpf);
            printf("\nTelefone: %s", cliente[i].telefone);
            printf("\nID: %i", cliente[i].id);
            printf("\nSaldo: R$%.2f", conta[i].saldo);
            printf("\nCheque Especial: R$%.2f", conta[i].chequeEspecial);
            printf("\nData de Abertura: %s", conta[i].dataAbertura);
            break;
        }
    }
}

int removerConta(int idCliente)
{
    if(idCliente==conta[idCliente].numero) 
    {        
        if (conta[idCliente].saldo==0)
        {
            conta[idCliente].ativa=0;
            return 1; //Sucesso
        }
    }
    else
    {
        return 0; // Erro
    }
}