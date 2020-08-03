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
	for (i = 0; i < tamanho(fila); i++){
		if (inicioRetornarValorInicio(fila) == input) {
			desenfileirar(fila);
		}else{
			enfileirar(auxiliar, desenfileirar(fila));
		}
	}

	for (j = 0; j < tamanho(auxiliar); j++) {
		enfileirar(fila, desenfileirar(auxiliar));
	}
}

void inverter(TFila* fila) {
	int i;
	int tamanhoDaFila = tamanho(fila);
	int vetor[5];
	for (i = 0; vazia(fila) != 0; i++) {
		vetor[i] = desenfileirar(fila);
	}

	for (i = tamanhoDaFila - 1; i >= 0; i--) {
		enfileirar(fila, vetor[i]);
	}
}

void exibirValorSemEsvaziarFila(TFila* fila) {
	int i;
	int tamanhoFila = tamanho(fila);
	int valorDesenfileirado;
	//TFila* filaAuxiliar = criar();
	for (i = 0; i < tamanhoFila; i++) {
		valorDesenfileirado = desenfileirar(fila);
		printf("%i\n", valorDesenfileirado);
		//enfileirar(filaAuxiliar, valorDesenfileirado);
		enfileirar(fila, valorDesenfileirado);
	}
}

void exibirValorEsvaziandoFila(TFila* fila) {
	int i;
	int tamanhoFila = tamanho(fila);
	int valorDesenfileirado;
	for (i = 0; i < tamanhoFila; i++) {
		valorDesenfileirado = desenfileirar(fila);
		printf("%i\n", valorDesenfileirado);
	}
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
	
}