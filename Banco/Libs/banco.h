#include "conta.h"
#include "cliente.h"

int idConta=0;

void adicionarConta(int idCliente)
{
    conta[idCliente].numero=idCliente;
    conta[idCliente].saldo=0;
    strcpy(conta[idCliente].dataAbertura, "11/11/2019");
    conta[idCliente].ativa=1;

    printf("\nConta cadastrada com sucesso! \nNome: %s\nCPF: %s\nTelefone: %s\nID: %i\nSaldo: R$%.2f\nData de Abertura: %s", 
    cliente[idCliente].nome, cliente[idCliente].cpf, cliente[idCliente].telefone, idCliente, conta[idCliente].saldo, conta[idCliente].dataAbertura);

    idConta++;
}

void listarContas()
{
    for (int i=0;i<100;i++)
    {
        if(strcmp(cliente[i].nome, "")!=0) 
        {        
            printf("\nNome: %s", cliente[i].nome);
            printf("\nCPF: %s", cliente[i].cpf);
            printf("\nTelefone: %s", cliente[i].telefone);
            printf("\nID: %i", cliente[i].id);
            printf("\nSaldo: R$%.2f", conta[i].saldo);
            printf("\nData de Abertura: %s", conta[i].dataAbertura);
        }
    }
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
            printf("\nData de Abertura: %s", conta[i].dataAbertura);
            break;
        }
    }
}

//TConta getConta(int numero);
//int removerConta(int numero);
