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
    float saldo, chequeEspecial;
}TConta;

TConta conta[100];

void depositar(int id, float valor)
{
    conta[id].saldo+=valor;

    printf("\nR$%.2f depositados na conta de %s com sucesso! \nSaldo Atual: R$%.2f", valor, cliente[id].nome, conta[id].saldo);
}

void debitar(int id, float valor)
{
    if (conta[id].saldo>=valor)
    {
        conta[id].saldo-=valor;
        printf("\nR$%.2f retirados da conta de %s com sucesso! \nSaldo Atual: R$%.2f", valor, cliente[id].nome, conta[id].saldo);
    }
    else if (conta[id].saldo<valor&&conta[id].chequeEspecial>0)
    {
        if (valor<=conta[id].chequeEspecial+conta[id].saldo) 
        {
            float difValor=valor;
            if (conta[id].saldo>0) difValor=valor-conta[id].saldo;
            conta[id].saldo-=valor;
            printf("%.2f", difValor);
            conta[id].chequeEspecial-=difValor;
            printf("\nR$%.2f retirados da conta de %s com sucesso! \nSaldo Atual: R$%.2f\nCheque Especial: R$%.2f", valor, cliente[id].nome, conta[id].saldo, conta[id].chequeEspecial);
        }
        else
        {
            printf("Erro: Saldo insuficiente.");
        }
    }
    else
    {
        printf("Erro: Saldo insuficiente.");
    }
}

void transferir(int idOrigem, int idDestino, float valor)
{
        if (conta[idOrigem].saldo>=valor)
        {
            conta[idOrigem].saldo-=valor;
            conta[idDestino].saldo+=valor;
            printf("\nR$%.2f enviados para a conta de %s com sucesso! \nSeu saldo atual: R$%.2f", valor, cliente[idDestino].nome, conta[idOrigem].saldo);
        }
        else
        {
            printf("Erro: Saldo insuficiente.");
        }    
}

#endif // CONTA_H_INCLUDED