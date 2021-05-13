#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"


Vertice* criarVertice(valor) {
	Vertice* vertice;

	vertice = (Vertice*)malloc(sizeof(Vertice));
	vertice->valor = valor;
	vertice->vizinhos = NULL;
	return vertice;
}

GLista* criarL(int quantidade) {
	GLista* gl = (GLista*)malloc(sizeof(GLista));
	gl->n = quantidade;
	gl->lista = (Vertice**)malloc(quantidade * sizeof(Vertice*));

	int i = 0;

	for (i; i < gl->n; i++) {
		gl->lista[i] = NULL;
	}

	return gl;
}

void adiciona_aresta(GLista* g, int v1, int v2) {
	Vertice** grafo = &g->lista[v1];
	while (*grafo != NULL &&
		(*grafo)->valor < v2)
		grafo = &(*grafo)->vizinhos;
	if (*grafo == NULL || (*grafo)->valor != v2) {
		Vertice* n = (Vertice*)malloc(sizeof(Vertice));
		n->valor = v2;
		n->vizinhos = *grafo;
		*grafo = n;
	}
}

int qtdArestas(GLista* gf) {
	int i = 0;
	int count = -1;
	while (gf->lista[i] != NULL) {
		count++;
		Vertice* l = gf->lista[i];
		while (l->vizinhos != NULL) {
			count++;
		}
		i++;
	}
	return count;
}

int returnQuantidadeArestas(GLista* grafo) {
	
	int i = 0;
	int contador = 0;
	int contadorFinal = 0;
	while (grafo->lista[i] != NULL) {
		contador = percorrerVizinhos(grafo->lista[i]->vizinhos);
		i++;		
		contadorFinal += contador + 1;
	}

	return contadorFinal;
}

int percorrerVizinhos(Vertice* vertice) {
	int contador = 0;
	if (vertice != NULL) {
		contador++;
		contador += percorrerVizinhos(vertice->vizinhos);
	}

	return contador;
}

int* verticeMaiorGrau(GLista* grafo) {
	int i = 0;
	int contador;
	int maiorGrau = 0;
	int indiceMaiorGrau;
	while (grafo->lista[i] != NULL && i < grafo->n) {
		int j = 0;
		contador = percorrerVizinhos(grafo->lista[i]->vizinhos);
		i++;
		
		if (contador > maiorGrau) {
			maiorGrau = contador;
			indiceMaiorGrau = i;
		}

		i++;
	}

	return indiceMaiorGrau;
}

int* buscaProfundidade(GLista* grafo) {
	int valor;
	int i = 0;
	while (grafo->lista[i] != NULL && i < grafo->n) {
		int j = 0;
		valor = percorrerVizinhos(grafo->lista[i]->vizinhos);
		i++;
	}

	return grafo->lista[i]->valor;
}
