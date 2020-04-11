#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main()
{
    int i = 1;
    printf("\nOperacoes\n");
    printf("\n%i", i);
    i++;

    TConta *contaJP, *contaAlberto;
    contaJP = criar(500);
    informar(contaJP);

    printf("\n%i", i);
    i++;

    pedirEmrprestimo(contaJP, 100);
    informar(contaJP);

    printf("\n%i", i);
    i++;

    sacar(contaJP, 600);
    informar(contaJP);

    printf("\n%i", i);
    i++;

    sacar(contaJP, 100);
    informar(contaJP);

    return 0;
}
