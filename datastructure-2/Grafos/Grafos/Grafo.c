#include <stdio.h>
#include <stdlib.h>

typedef struct grafo {
	int quantidade;
	int** matriz;
} Grafo;

Grafo* criar(int quantidade) {
	Grafo* g;
	g = (Grafo*)malloc(sizeof(Grafo));

	g->quantidade = quantidade;
	g->matriz = (int**)malloc(sizeof(quantidade * sizeof(int*)));

	int i = 0;
	
	for (i; i < quantidade; i++) {
		g->matriz[i] = (int**)malloc(quantidade * sizeof(int *));

		return g;
	}

}