#include <stdio.h>
#include <stdlib.h>

typedef struct Vertice {
	int valor;
	struct Vertice* vizinhos;
}Vertice;

typedef struct Grafo {
	int n;
	struct Vertice** lista;
}GLista;

Vertice* criarVertice(int valor);

GLista* criarL(int quantidade);

void adiciona_aresta(GLista* g, int v1, int v2);

int returnQuantidadeArestas(GLista* grafo);

int* verticeMaiorGrau(GLista* grafo);

int* buscaProfundidade(GLista* grafo);