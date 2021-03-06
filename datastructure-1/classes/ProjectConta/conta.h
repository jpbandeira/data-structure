#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

typedef struct Conta TConta;
TConta *criar(float saldoInicial);
void depositar(TConta *conta, float deposito);
void sacar(TConta *conta, float valor);
void informar(TConta *conta);
void pedirEmrprestimo(TConta *conta, float valor);
void pagarEmprestimo(TConta *conta, float valorAPagar);

#endif
