#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    TPilha *pilha = criar(10);
    printf("%i", topo(pilha));
    return 0;
}
