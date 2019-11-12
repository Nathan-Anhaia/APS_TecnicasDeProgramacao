#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "./Libs/banco.h"
#include "./Libs/gerenciaClientes.h"
#include "./Libs/cliente.h"
#include "./Libs/conta.h"

int main() {

    int id, id2;
    float valor;
    char nome[10], cpf[11], telefone[10];

    int opcao=0;

    while(opcao != 9)
    {
        printf("\n\n\n=== Menu do Banco ===");
        printf("\n1 - Cadastrar Cliente");
        printf("\n2 - Cadastrar Conta");
        printf("\n3 - Listar Contas");
        printf("\n4 - Pesquisar Conta");
        printf("\n5 - Depositar");
        printf("\n6 - Debitar (Sacar)");
        printf("\n7 - Transferir");
        printf("\n8 - Remover Conta");
        printf("\n9 - Sair");
        printf("\nEscolha uma opcao: ");

        scanf("%i", &opcao);

        switch (opcao) {
            case 1: // Cadastrar Cliente
                printf("\nDigite o CPF para o cadastro: ");
                fflush(stdin);
                gets(cpf);

                if (existeCPF(cpf)==0)
                {
                    printf("Digite o Nome para o cadastro: ");
                    gets(nome);
                    printf("Digite o Telefone para o cadastro: ");
                    gets(telefone);
                    //Debug: printf("\nCadastro enviado. \nNome: %s,\nCPF: %s,\nTelefone: %s.\n", nome, cpf, telefone);
                    cadastrarCliente(nome, cpf, telefone);
                }
                else
                {
                    printf("\nCPF ja cadastrado.");
                }
                
                break;
            case 2: // Cadastrar Conta
                printf("\nDigite o ID do cliente: ");
                scanf("%i", &id);
                
                printf("Digite o limite do Cheque Especial: ");
                scanf("%f", &conta[id].chequeEspecial);
                adicionarConta(id);
                break;
            case 3: // Listar Contas
                listarContas();
                break;
            case 4: // Pesquisar Conta
                printf("\nDigite o numero da conta que deseja buscar: ");
                scanf("%i", &id);

                imprimirConta(id);
                break;
            case 5: // Depositar
                printf("Digite o numero de sua conta: ");
                scanf("%i", &id);
                if (id==conta[id].numero)
                {
                    printf("Digite o valor do deposito: ");
                    scanf("%f", &valor);
                    depositar(id, valor);
                }
                else
                {
                    printf("Erro: Conta nao localizada.");
                }
                break;
            case 6: // Debitar (Sacar)
                printf("Digite o numero de sua conta: ");
                scanf("%i", &id);
                if (id==conta[id].numero)
                {
                    printf("Digite o valor do saque: ");
                    scanf("%f", &valor);
                    debitar(id, valor);
                }
                else
                {
                    printf("Erro: Conta nao localizada.");
                }
                break;
            case 7: // Transferir
                printf("Digite o numero de sua conta: ");
                scanf("%i", &id);
                if (id==conta[id].numero)
                {
                    printf("Digite o valor da transferencia: ");
                    scanf("%f", &valor);
                    
                    printf("Digite o numero da conta de quem ira receber: ");
                    scanf("%f", &id2);

                    if (id2==conta[id2].numero)
                    {
                        transferir(id, id2, valor);
                    }
                    else
                    {
                        printf("Erro: Conta de destino nao localizada.");
                    }
                }
                else
                {
                    printf("Erro: Conta nao localizada.");
                }
                break;
            case 8: // Remover Conta
                printf("Digite o numero de sua conta: ");
                scanf("%i", &id);
                if (removerConta(id)==1)
                {
                    printf("\nConta removida com sucesso!");
                }
                else
                {
                    printf("\nErro ao tentar remover a conta.");
                }                
                break;
            case 9: // Sair
                printf("Saindo...");
                break;
            default:
                printf("Erro, opcao invalida");
                break;
        }
    }
    return 0;
}
