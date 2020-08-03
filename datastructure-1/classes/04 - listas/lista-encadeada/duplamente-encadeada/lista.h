typedef struct No TNo;
typedef struct ListaSimples TListaSimples;

TNo* criar(int valor);
TListaSimples* criarSimples(int valor);

int tamanho(TNo* no);
int tamanhoSimples(TListaSimples* lista);

void inserir(TNo* no, int valor);
void inserirSimples(TListaSimples* lista, int valor);

int remover(TNo* no, int valor);
TNo* buscar(TNo* no, int valor);

void exibeTodos(TNo* no);
void exibir(TListaSimples* lista);

	void exibeNo(TNo* no);
void inserirNaPosicao(TNo* no, int valor, int posicao);
TNo* removerNaPosicao(TNo* no, int posicao);

int compararListas(TListaSimples* listaSimples, TNo* no);