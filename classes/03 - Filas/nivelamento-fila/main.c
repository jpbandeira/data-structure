#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void exibirValores(TFila* fila) {
	int i;
	int tamanhoDaFila = tamanho(fila);
	int valorDesenfileirado;
	TFila* auxiliar = criar();
	for (i = 0; i < tamanhoDaFila; i++) {
		valorDesenfileirado = desenfileirar(fila);
		printf("\n%i\n", valorDesenfileirado);
		enfileirar(auxiliar, valorDesenfileirado);
		enfileirar(fila, desenfileirar(auxiliar));
	}
}

void removerValor(TFila* fila, int input) {
	TFila* auxiliar = criar();
	int i, j;
	int tamanhoDaFila = tamanho(fila);
	for (i = 0; i < tamanhoDaFila; i++){
		if (inicioRetornarValorInicio(fila) == input) {
			desenfileirar(fila);
		}
			enfileirar(auxiliar, desenfileirar(fila));
	}

	for (j = 0; j < tamanhoDaFila; j++) {
		enfileirar(fila, desenfileirar(auxiliar));
	}
}

void inverterValor(TFila* fila) {
	TFila* auxiliar = criar();
}

int main(int argc, char*argv[]) {
	TFila* fila = criar();	

	enfileirar(fila, 1);
	enfileirar(fila, 2);
	enfileirar(fila, 3);
	enfileirar(fila, 4);
	enfileirar(fila, 5);

	exibir(fila);

	removerValor(fila, 3);
	exibir(fila);
	removerValor(fila, 4);
	exibir(fila);
	removerValor(fila, 5);
	exibir(fila);


}