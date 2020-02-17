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
    TPPlacar;
}TPJogoDeFutebol;

int main(){

    TPSmartphone *ponteiroSmartphone;
    ponteiroSmartphone = (TPSmartphone *) malloc(sizeof(TPSmartphone));

    TPPlacar *ponteiroPlacar;
    ponteiroPlacar = (TPPlacar *) malloc(sizeof(TPPlacar));

    TPJogoDeFutebol *ponteiroJogo;
    ponteiroJogo = (TPJogoDeFutebol *) malloc(sizeof(TPJogoDeFutebol));

    printf("\nDigite o modelo: ");
    gets(ponteiroSmartphone->nomeModelo);
    printf("\nDigite a capacidade de memoria: ");
    scanf("%f", &ponteiroSmartphone->memoria);
    printf("\nDigite a largura: ");
    scanf("%f", &ponteiroSmartphone->largura);
    printf("\nDigite a altura: ");
    scanf("%f", &ponteiroSmartphone->altura);

}
