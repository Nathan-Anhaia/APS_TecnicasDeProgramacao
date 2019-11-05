#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct Cliente
{

    char nome[10];
    char cpf[11];
    char telefone[10];

}TCliente;

void imprimirCliente(TCliente cliente){

    for (int i =0; i<10; i++){

        if (strcmp (cliente, lista_conta[i]==0)){

        printf("Cliente: %s", cliente.nome);
        printf("CPF: %s", cliente.cpf);
        printf("Cliente: %s", cliente.telefone);

        }
    }
}

#endif // CLIENTE_H_INCLUDED
