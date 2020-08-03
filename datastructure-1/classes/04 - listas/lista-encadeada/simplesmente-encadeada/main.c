#include <stdio.h>
#include <stdlib.h>
#include "simples-encadeada.h"

int main(int argc, int argv[]) {
	TListaSimples* lista = criar(-1);

	inserir(lista, 4);
	inserir(lista, 3);
	inserir(lista, 2);
	inserir(lista, 1);

	exibir(lista);

	removerOrdenadoDecrescente(lista, 3);
	exibir(lista);

	free(lista);

	//printf("%i", tamanho(lista));
}