Questão 4.                         #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct contaBanco {
    char nome[300], numero[300], tipo[300];
    float saldo, transferencia, depositado;
};

float deposito (float valorInicio, float valorDeposito) {
    return valorInicio + valorDeposito;
}

float saque (float valorInicio float valorSaque) {
    return valorInicio - valorSaque;
}

int main ( ) {

    int opcao;
    float depositoAtualizado, saqueAtualizado;
    struct contaBanco dados;


    do {
        printf("Qual é a opção de sua escolha?\n");
        printf("1 - Registro de nova conta\n");
        printf("2 - Depósito \n");
        printf("3 - Saque\n");
        printf("4 - Sair\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        system("cls||clear");

        switch (opcao) {
        case 1:
            fflush(stdin);

            printf("Titular: ");
            gets(dados.nome);

            printf(" Conta: \n ");
            gets(dados.numero);

            printf("Tipo da conta desejada: ");
            gets(dados.tipo);

            printf("Saldo disponível na conta: ");
            scanf("%f", &dados.saldo);

            break;

        case 2:
            printf("Quanto quer depositar: ");
            scanf("%f", &dados.depositado);

            depositoAtualizado = deposito(dados.saldo, dados.depositado);

            printf("Titular: %s\n", dados.nome);
            printf("Número da conta: %s\n", dados.numero);
            printf("Tipo da conta: %s\n", dados.tipo);
            printf("Saldo pré-depósito: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", depositoAtualizado);

            break;

        case 3:
            printf("Quanto quer sacar: ");
            scanf("%f", &dados.transferencia);

            saqueAtualizado = saque(dados.saldo, dados.transferencia);

            printf("Titular: %s\n", dados.nome);
            printf("Número da conta: %s\n", dados.numero);
            printf("Tipo da conta: %s\n", dados.tipo);
            printf("Saldo pré-saque: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", saqueAtualizado);

            break;

        default:
            break;
        }
    } while (opcao != 0);

    return 0;
}