#include "stdlib.h"

TCliente clientes[10];
int totalClientes =0;

void adicionarCliente(TCliente clientes){

    for (int i = 0; i<10; i++){
        if (clientes != lista_cliente[i]){
            if (lista_cliente[i] == '\0'){
            strcpy (lista_cliente[i], clientes[i]);
            }
        }else {
            printf("Cliente nao cadastrado ! \n");
        }
}
int existeCPF(TCliente clientes.cpf){

    for (int j = 0; j<10; j++){

        if (strcmp (lista_cliente[j].cpf, clientes.cpf) == 0){

            printf("Ja existe um usuario com este CPF !\n");
        } else{

            printf("Nao existe este CPF !\n")
        }
    }
}
char* listarClientes();
