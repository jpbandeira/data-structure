typedef struct No TNo;

TNo* criar(int valor);
int tamanho(TNo* no);
void inserir(TNo* no, int valor);
int remover(TNo* no, int valor);
TNo* buscar(TNo* no, int valor);
void exibeTodos(TNo* no);
void exibeNo(TNo* no);
void inserirNaPosicao(TNo* no, int valor, int posicao);