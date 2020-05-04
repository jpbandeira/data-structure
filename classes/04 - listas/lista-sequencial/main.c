#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
	TLista* lista = criar();
	inserir(lista, 2);
	inserir(lista, 3);
	inserir(lista, 4);
	inserir(lista, 5);
	inserir(lista, 6);
	
	exibe(lista);

	inverter(lista);
	exibe(lista);

	//printf("\n%i", tamanho(lista));
	return 0;
}