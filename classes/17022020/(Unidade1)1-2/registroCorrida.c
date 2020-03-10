#include <stdio.h>
#include <stdlib.h>
#includ "registroCorrida.h"

struct RegistrosCorrida {
    float frequencia;
    float temperatura;
    float elevacao;
};

TRegistroCorrida *criar(int quantidade){
    TRegistroCorrida *registroCorrida = (TRegistroCorrida *) malloc(quantidade*sizeof(TRegistroCorrida));
    return registroCorrida;
};

float calcularMedia(TRegistroCorrida *registroCorrida, int quantidadeParaCalculo){
    int i; float soma = 0;
    for(i = 0; i < quantidadeParaCalculo; i++){
        soma = soma + registroCorrida[i].frequencia;
    }
    return soma / quantidadeParaCalculo;
}

float maiorFrequencia(TRegistroCorrida *registroCorrida, int quantidadeParaVetor){
    int i; float maiorValor = 0;
    for(i = 0; i < quantidadeParaVetor; i++){
        if(registroCorrida[i].frequencia > maiorValor){
            maiorValor = registroCorrida[i].frequencia;
        }
    }
    return maiorValor;
}

void findByType(TRegistroCorrida *registroCorrida, int quantidadeParaVetor, int defineRetorno){
    int i;
    switch(defineRetorno){
        case 1:
            printf("Lista de FREQUENCIAS");
                for(i = 0; i < quantidadeParaVetor; i++){
                    printf("\nFrequencia: %f", registroCorrida[i].frequencia);
        }break;
        case 2:
            printf("Lista de TEMPERATURAS");
                for(i = 0; i < quantidadeParaVetor; i++){
            printf("\nTemperatura: %f", registroCorrida[i].temperatura);
        }break;
        case 3:
            printf("Lista de ELECACOES");
                for(i = 0; i < quantidadeParaVetor; i++){
            printf("\nElevacao: %f", registroCorrida[i].elevacao);
        }break;
    }
}
