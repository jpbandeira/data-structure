#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
	TLista* lista = criar();
	inserir(lista, 1);
	inserir(lista, 2);
	inserir(lista, 3);
	inserir(lista, 4);
	inserir(lista, 5);

	exibe(lista);

	removerNaPosicao(lista, 2);
	exibe(lista);
	removerNaPosicao(lista, 3);
	exibe(lista);
	removerNaPosicao(lista, 4);
	exibe(lista);

	//printf("\n%i", tamanho(lista));
	return 0;
}