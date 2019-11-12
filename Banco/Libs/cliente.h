#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct Cliente {
    int id;
    char nome[10], cpf[11], telefone[10];
}TCliente;

TCliente cliente[100];

void imprimirCliente(int idCliente)
{
    int i;
    for (i=0;i<100;i++)
    {
        if(idCliente==cliente[i].id) 
        {        
            printf("\nNome: %s", cliente[i].nome);
            printf("\nCPF: %s", cliente[i].cpf);
            printf("\nTelefone: %s", cliente[i].telefone);
            printf("\nID: %i", cliente[i].id);
            break;
        }
    }
}

#endif // CLIENTE_H_INCLUDED
