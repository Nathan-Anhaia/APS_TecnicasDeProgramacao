#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cliente.h"

int idCliente=0;

int existeCPF(char cpf[11])
{
    int j;
    for (j=0;j<100;j++)
    {
        if (strcmp(cpf, cliente[j].cpf)==0)
        {
            return 1;
            break;
        } 
        else
        {
            return 0;
        }
        
    }
}

void cadastrarCliente(char nome[10], char cpf[11], char telefone[10])
{    
    strcpy(cliente[idCliente].nome, nome);
    strcpy(cliente[idCliente].cpf, cpf);
    strcpy(cliente[idCliente].telefone, telefone);
    cliente[idCliente].id=idCliente;
    
    printf("\nCadastro realizado com sucesso! \nNome: %s\nCPF: %s\nTelefone: %s\nID: %i\n", cliente[idCliente].nome, cliente[idCliente].cpf, cliente[idCliente].telefone, idCliente);
    idCliente++;
}


void listarClientes()
{
    for (int i=0;i<100;i++)
    {
        if(strcmp(cliente[i].nome, "")!=0) 
        {        
            printf("\nNome: %s", cliente[i].nome);
            printf("\nCPF: %s", cliente[i].cpf);
            printf("\nTelefone: %s", cliente[i].telefone);
            printf("\nID: %i", cliente[i].id);
            printf("\n");     
        }
    }
}
