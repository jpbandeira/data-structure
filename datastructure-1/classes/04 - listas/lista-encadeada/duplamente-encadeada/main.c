#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int main(int argc, int argv[]) {
	TNo* lista = criar(-1);
	TListaSimples* listaSimples = criarSimples(-1);

	inserir(lista, 4);
	inserir(lista, 5);
	inserir(lista, 6);

	inserirSimples(listaSimples, 1);
	inserirSimples(listaSimples, 2);
	inserirSimples(listaSimples, 3);
	
	exibeTodos(lista);
	exibir(listaSimples);

	printf("\n");

	printf("%i" , compararListas(listaSimples, lista));

	printf("\n");

	free(lista);
	free(listaSimples);

}