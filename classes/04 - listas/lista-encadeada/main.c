#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, int argv[]) {
	TListaSimples* lista = criar(-1);

	inserir(lista, 1);
	inserir(lista, 2);
	inserir(lista, 3);
	inserir(lista, 4);

	exibir(lista);

	removerNaPosicao(lista, 3);
	exibir(lista);

	removerNaPosicao(lista, 1);
	exibir(lista);

	free(lista);

	//printf("%i", tamanho(lista));
}