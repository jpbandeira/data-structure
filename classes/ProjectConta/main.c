#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main()
{
    TConta *contaJP, *contaAlberto;
    contaJP = criar(9722, 650.00);
    informar(contaJP);
    depositar(contaJP, 20.00);
    informar(contaJP);
    sacar(contaJP, 20.00);
    informar(contaJP);
    return 0;
}
