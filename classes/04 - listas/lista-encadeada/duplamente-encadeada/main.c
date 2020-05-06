#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int main(int argc, int argv[]) {
	TNo* lista = criar(-1);

	inserir(lista, 1);
	inserir(lista, 2);
	inserir(lista, 3);
	
	exibeTodos(lista);

	//inserirNaPosicao(lista, 99, 1);
	//exibeTodos(lista);

	//inserirNaPosicao(lista, 39, 0);
	//exibeTodos(lista);

	inserirNaPosicao(lista, 39, 3);
	exibeTodos(lista);

}