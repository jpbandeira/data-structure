#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int main(int argc, int argv[]) {

	GLista* gl = criarL(10);
	
	Vertice* vertice = criarVertice(1);
	gl->lista[0] = vertice;
	vertice = criarVertice(2);
	gl->lista[1] = vertice;	
	vertice = criarVertice(3);
	gl->lista[2] = vertice;
	vertice = criarVertice(4);
	gl->lista[3] = vertice;

	vertice = criarVertice(12);
	gl->lista[0]->vizinhos = vertice;

	vertice = criarVertice(22);
	gl->lista[1]->vizinhos = vertice;

	vertice = criarVertice(32);
	gl->lista[2]->vizinhos = vertice;

	vertice = criarVertice(42);
	gl->lista[3]->vizinhos = vertice;

	vertice = criarVertice(121);
	gl->lista[0]->vizinhos->vizinhos = vertice;

	vertice = criarVertice(221);
	gl->lista[1]->vizinhos->vizinhos = vertice;

	vertice = criarVertice(1212);
	gl->lista[0]->vizinhos->vizinhos->vizinhos = vertice;

	vertice = criarVertice(2212);
	gl->lista[1]->vizinhos->vizinhos->vizinhos = vertice;
	vertice = criarVertice(22123);
	gl->lista[1]->vizinhos->vizinhos->vizinhos->vizinhos = vertice;

/*
printf("%d", gl->lista[0]->valor);
	printf("%d", gl->lista[1]->valor);
	printf("%d", gl->lista[2]->valor);
	printf("%d", gl->lista[3]->valor);
	printf("%d", gl->lista[0]->vizinhos->valor);
	printf("%d", gl->lista[1]->vizinhos->valor);
	printf("%d", gl->lista[2]->vizinhos->valor);
	printf("%d", gl->lista[3]->vizinhos->valor);
*/
	

	printf("  %d", returnQuantidadeArestas(gl));
	int valor = verticeMaiorGrau(gl);
	printf("  %d  ", valor);

	printf("%d", buscaProfundidade(gl));

}