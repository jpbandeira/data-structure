#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

struct Conta{
    int numero;
    float saldo;
};

TConta *criar(int numero, float saldoInicial){
    TConta *conta = (TConta *) malloc(sizeof(TConta));
    conta->numero = numero;
    conta->saldo = saldoInicial;
    return conta;
};

void depositar(TConta *conta, float deposito){
    conta->saldo += deposito;
};
void sacar(TConta *conta, float valor){
    conta->saldo -= valor;
};
void informar(TConta *conta){
    printf("\nNumero: %i", conta->numero);
    printf("\nSaldo: %.2f", conta->saldo);
};
