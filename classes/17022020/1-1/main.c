#include <stdio.h>
#include <stdlib.h>

typedef struct smartphone{
    char nomeModelo[30];
    float memoria;
    float largura;
    float altura;
}TPSmartphone;

typedef struct placar{
    int placarTimeLadoEsquerdo;
    int placarTimeLadoDireito;
}TPPlacar;

typedef struct jogoDeFutebol{
    char timeLadoDireito[30];
    char timeLadoEsquerdo[30];
    TPPlacar *placar;
}TPJogoDeFutebol;

int main(){

    TPSmartphone *ponteiroSmartphone;
    ponteiroSmartphone = (TPSmartphone *) malloc(sizeof(TPSmartphone));

    TPJogoDeFutebol *ponteiroJogo;
    ponteiroJogo = (TPJogoDeFutebol *) malloc(sizeof(TPJogoDeFutebol));

    ponteiroJogo->placar = (TPPlacar *) malloc(sizeof(TPPlacar));

    printf("Digite o modelo: ");
    gets(ponteiroSmartphone->nomeModelo);
    printf("Digite a capacidade de memoria: ");
    scanf("%f", &ponteiroSmartphone->memoria);
    printf("Digite a largura: ");
    scanf("%f", &ponteiroSmartphone->largura);
    printf("Digite a altura: ");
    scanf("%f", &ponteiroSmartphone->altura);

    fflush(stdin);

    printf("Time A: ");
    gets(ponteiroJogo->timeLadoDireito);
    printf("Time B: ");
    gets(ponteiroJogo->timeLadoEsquerdo);
    printf("Placar Time A: ");
    scanf("%i", &ponteiroJogo->placar->placarTimeLadoDireito);
    printf("Placar Time B: ");
    scanf("%i", &ponteiroJogo->placar->placarTimeLadoEsquerdo);
}
