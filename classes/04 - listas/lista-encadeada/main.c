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

	removerNoInicio(lista);
	exibir(lista);

	printf("%i", tamanho(lista));
}