typedef struct ListaSimples TListaSimples;

TListaSimples* criar(int valor);
int tamanho(TListaSimples* lista);
void inserir(TListaSimples* lista, int valor);
int remover(TListaSimples* lista, int valor);
TListaSimples* buscar(TListaSimples* lista, int valor);
void exibir(TListaSimples* lista);
void mostraNo(TListaSimples* lista);
void inserirNoInicio(TListaSimples* lista, int valor);
TListaSimples* removerNoInicio(TListaSimples* lista);
void inserirNaPosicao(TListaSimples* lista, int valor, int posicao);
void removerNaPosicao(TListaSimples* lista, int posicao);