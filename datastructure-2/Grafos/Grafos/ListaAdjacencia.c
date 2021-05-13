#include <stdio.h>
#include <stdlib.h>

typedef struct Vertice {
	int valor;
	struct Vertice *vizinhos;
}Vertice;

typedef struct Grafo {
	int n;
	struct Vertice** lista;
}GLista;

Vertice* criarVertice(valor) {
	Vertice* vertice;

	vertice = (Vertice**)malloc(sizeof(Vertice*));
	vertice->valor = valor;
	return vertice;
}

GLista* criarL(int quantidade) {
	GLista* gl = (GLista*)malloc(sizeof(GLista));
	gl->n = quantidade;
	gl->lista = (Vertice**)malloc(quantidade * sizeof(Vertice*));

	return gl;
}

void adiciona_aresta(GLista* g, int v1, int v2) {
	Vertice** grafo = &g->lista[v1];
	while (*grafo != NULL &&
		(*grafo)->valor < v2)
		grafo = &(*grafo)->vizinhos;
	if (*grafo == NULL || (*grafo)->valor != v2) {
		Vertice* n = (Vertice*) malloc(sizeof(Vertice));
		n->valor = v2;
		n->vizinhos = *grafo;
		*grafo = n;
	}
}

int returnQuantidadeArestas(GLista *grafo) {
	int i = 0;
	while (grafo->lista[i] != NULL) {
		printf("%d", grafo->lista[i]->valor);
		i++;
	}
}

