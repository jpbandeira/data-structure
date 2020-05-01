#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
	TLista* lista = criar();
	inserir(lista, 2);
	inserir(lista, 3);
	inserir(lista, 4);
	exibe(lista);

	inserirInicio(lista, 23);
	exibe(lista);

	printf("\n%i", buscar(lista, 3));
	return 0;
}