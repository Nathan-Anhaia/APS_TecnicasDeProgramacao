#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include "cliente.h"

// typedef struct Data{
//     int dia;
//     int mes;
//     int ano;
// }TData;

typedef struct Conta{
    int numero, ativa;
    char dataAbertura[10];
    float saldo;
}TConta;

TConta conta[100];

void depositar(int id, float valor)
{
    conta[id].saldo+=valor;

    printf("\nR$%.2f depositados na conta de %s com sucesso! \nSaldo Atual: R$%.2f", valor, cliente[id].nome, conta[id].saldo);
}


int debitar(int id, float valor)
{
    if (conta[id].saldo>=valor)
    {
        conta[id].saldo-=valor;
        printf("\nR$%.2f retirados da conta de %s com sucesso! \nSaldo Atual: R$%.2f", valor, cliente[id].nome, conta[id].saldo);
    }
    else
    {
        printf("Erro: Saldo insuficiente.");
    }
}

/*
int transferir(TConta origem, TConta destino, float quantia)
{
    int leiaOrigem, leiaDestino;

    for (leiaOrigem=0; leiaOrigem<10; leiaOrigem++)
    {
        if () {
            printf("Digite o CPF da sua conta: \n");
            scanf("%d", &origem);

            printf("Digite o CPF da conta para qual sera feita a transferencia\n");
            scanf("%d", &destino);
            printf("Digite a quantia que sera transferida\n");
            scanf("%f", quantia);
        }
    }

}
*/
#endif // CONTA_H_INCLUDED
