
typedef struct Lista TLista;

TLista* criar();
int tamanho(TLista* lista);
void inserir(TLista* lista, int valor);
void inserirInicio(TLista* lista, int valor);
int remover(TLista* lista, int valor);
void removerTodos(TLista* lista, int valor);
int buscar(TLista* lista, int valor);
void exibe(TLista* lista);