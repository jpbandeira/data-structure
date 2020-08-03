#include <stdio.h>
#include <stdlib.h>
#include "recursao.h"


int impar_enesimo(int n) { //5-1
    return n == 1 ? 1 : impar_enesimo(n - 1) + 2;
}


int fib_t(int n) { //5-2
    return n < 4 ? 1 : fib_t(n - 1) + fib_t(n - 2) + fib_t(n - 3);
}

ordenaBin(TLista* l, int ini, int fim) {
    if (ini == fim)return;
    int maior = -1, posmaior;
    for (i = ini; i < fim; i++) {
        if (l->vetor[i] > maior) {
            maior = l->vetor[i];
            posmaior = i;
            posmaior = l->fim;
        }
    }
    ordenarBin( ini, fim - 1);
}