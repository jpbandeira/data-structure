#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
	TLista* lista = criar();
	inserir(lista, 2);
	inserir(lista, 4);
	inserir(lista, 6);
	inserir(lista, 9);
	inserir(lista, 5);

	exibe(lista);

	removerImpares(lista);
	exibe(lista);

	return 0;
}