#include "conta.h"

TConta contas[10];
int numeroConta=0;

void adicionarConta(TConta conta){

    for (int i = 0; i < 10; i++){

        if (lista_conta[i] == ' '){

            strcpy (lista_conta[i], conta);
        }
    }
}
char* listarContas();
char* pesquisarConta(int numero);
TConta getConta(int numero);
int removerConta(int numero);
