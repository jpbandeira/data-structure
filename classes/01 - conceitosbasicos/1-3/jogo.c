#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

struct JogoDeFutebol {
    char timeLadoDireito[30];
    char timeLadoEsquerdo[30];
    int placarTimeLadoEsquerdo;
    int placarTimeLadoDireito;
};


TJogoDeFutebol *criar() {
    TJogoDeFutebol *jogoDeFutebol = (TJogoDeFutebol*)malloc(sizeof(TJogoDeFutebol));
    jogoDeFutebol->placarTimeLadoDireito = 0;
    jogoDeFutebol->placarTimeLadoEsquerdo = 0;

    return jogoDeFutebol;
}

int vencedor(TJogoDeFutebol *jogo){
    
    return 0;
}
