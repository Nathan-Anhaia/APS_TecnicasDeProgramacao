#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
int dia;
int mes;
int ano;
}TData;

typedef struct Conta{
int numero;
TCliente Cliente;
TData dataAbertura;
float saldo;
int ativa;
}TConta;

void depositar(TConta conta,float valor){

int leiaDeposito;

printf("Digite a conta para depositar: \n");
scanf ("%d", &conta);

    for (leiaDeposito=0; leiaDeposito<=10; leiaDeposito++){

        if (conta.numero == lista_conta[leiaDeposito].numero)
        {
            printf("Digite o valor para depositar: \n");
            scanf ("%f",&valor);

            TConta saldoDeposito;

            saldoDeposito.saldo += valor;

            printf("Valor depositado com Sucesso ! \n");
            printf("Valor depositado: %.2f", valor); 
        }
    }
}
int retirar(TConta conta, float quantia)

{

    printf("Digite o valor para debitar: \n");
    scanf ("%f",&quantia);

    TConta saldoDebitado;

    saldoDebitado.saldo -= quantia;

    printf("Valor depositado: %.2f", quantia);

}
int transferir(TConta origem, TConta destino, float quantia)
{
    printf("Digite o CPF da sua conta: \n");
    scanf("%d", &origem);

    printf("Digite o CPF da conta para qual sera feita a transferencia\n");
    scanf("%d", &destino);
    printf("Digite a quantia que sera transferida\n");
    scanf("%f", quantia);

}
void imprimirConta(TConta conta){

    printf("Digite o CPF da conta: \n");
    scanf("%d", &conta);

    TConta SaldoImprimir;

    printf("Saldo Total: %.2f \n", SaldoImprimir.saldo);
    
     
}
