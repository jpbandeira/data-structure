#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct Pilha TPilha;
TPilha *criar(int valor);
void empilhar(TPilha *pilha, int valor);
int desempilhar(TPilha *pilha);
int tamanho(TPilha *pilha);
int topo(TPilha *pilha);
int estaVazia(TPilha *pilha);
void inverterPosicoes(TPilha *pilha);
void mostrar(TPilha *pilha);
int removerValor(TPilha *pilha, int valor);

#endif
