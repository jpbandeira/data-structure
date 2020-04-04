typedef struct Fila TFila;

TFila* criar();
int desenfileirar(TFila* fila);
void enfileirar(TFila* fila, int valor);
void exibir(TFila* fila);
int tamanho(TFila* fila);
int inicio(TFila* fila);
int vazia(TFila* fila);
int cheia(TFila* fila);
int inicioRetornarValorInicio(TFila* fila);