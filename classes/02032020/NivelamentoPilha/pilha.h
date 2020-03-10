#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct Pilha TPilha;
TPilha *criar(int valor);
void empilhar(TPilha *pilha, int valor);
int desempilhar(TPilha *pilha);
int tamanho(TPilha *pilha);
int topo(TPilha *pilha);
int pilhaVazia(TPilha *pilha);
void inverterPosicoes(TPilha *pilha);

#endif
