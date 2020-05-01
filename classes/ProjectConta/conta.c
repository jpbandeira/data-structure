#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

struct Conta{
    float saldo;
    float valorDeEmprestimo;
};

TConta *criar(float saldoInicial){
    TConta *conta = (TConta *) malloc(sizeof(TConta));
    conta->saldo = saldoInicial;
    conta->valorDeEmprestimo = 0;
    return conta;
};

void depositar(TConta *conta, float deposito){
    if(conta->valorDeEmprestimo > 0){
        conta->valorDeEmprestimo -= deposito;
    }else{
        conta->saldo += deposito;
    }
    printf("\nDeposito de: %f\n", deposito);

};

void sacar(TConta *conta, float valor){
    int saldo = conta->saldo;
    float valorSomadoParaEmprestimo =  valor - saldo;
    conta->saldo -= valor;
    if(conta->saldo < 0){
     conta->saldo += valorSomadoParaEmprestimo;
     conta->valorDeEmprestimo += valorSomadoParaEmprestimo;
    }
    printf("\nSaque de: %f\t", valor);
    printf("\Valor acrescido ao emprestimo: %f\n", valorSomadoParaEmprestimo);
};

void pedirEmrprestimo(TConta *conta, float valor){
    conta->valorDeEmprestimo += valor;
    printf("\nEmprestimo de: %f\n", valor);
}

void pagarEmprestimo(TConta *conta, float valorAPagar){
    conta->valorDeEmprestimo -= valorAPagar;
    printf("\nPagamento de: %f\n", valorAPagar);
}

void informar(TConta *conta){
    printf("\nSaldo: %.2f\t", conta->saldo);
    printf("Emprestimo: %.2f\n", conta->valorDeEmprestimo);
};
