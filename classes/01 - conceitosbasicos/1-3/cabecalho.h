typedef struct Jogo TJogo;
TJogo* criar(char time1[30], char time2[30], int placarTime1, int placarTime2);
TJogo* vencedor(TJogo *jogo);
int * goleada(TJogo *jogo);

