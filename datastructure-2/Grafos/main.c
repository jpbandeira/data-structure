#include <stdio.h>
#include <stdlib.h>


int main(int argc, int argv[]) {

	Vertice* vertice = criarVertice(1);
	GLista* gl = criarL(10);
	vertice->valor = 1;
	vertice->vizinhos = NULL;
	gl->lista[0] = vertice;

	printf("%d", gl->lista[0]->valor);

	//returnQuantidadeArestas(gl);

}