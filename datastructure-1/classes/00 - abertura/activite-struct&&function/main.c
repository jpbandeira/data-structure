#include <stdio.h>
#include <stdlib.h>

const int QTD = 3;

struct RegistrosCorrida {
    float frequencia;
    float temperatura;
    float elevacao;
};

float calcularMedia(struct RegistrosCorrida *registroCorrida, int quantidadeParaCalculo){
    int i; float soma = 0;
    for(i = 0; i < quantidadeParaCalculo; i++){
        soma = soma + registroCorrida[i].frequencia;
    }
    return soma / quantidadeParaCalculo;
}

float maiorFrequencia(struct RegistrosCorrida *registroCorrida, int quantidadeParaVetor){
    int i; float maiorValor = 0;
    for(i = 0; i < quantidadeParaVetor; i++){
        if(registroCorrida[i].frequencia > maiorValor){
            maiorValor = registroCorrida[i].frequencia;
        }
    }
    return maiorValor;
}

void findByType(struct RegistrosCorrida *registroCorrida, int quantidadeParaVetor, int defineRetorno){
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
            printf("\Temperatura: %f", registroCorrida[i].temperatura);
        }break;
        case 3:
            printf("Lista de ELECACOES");
                for(i = 0; i < quantidadeParaVetor; i++){
            printf("\nElevacao: %f", registroCorrida[i].elevacao);
        }break;
    }
}

int main(){

    int i;
    struct RegistrosCorrida *registroCorrida;
    registroCorrida = malloc(QTD* sizeof(struct RegistrosCorrida));


    for(i = 0; i < 3; i++){
        printf("Digite a frequencia: ");
        scanf("%f", &registroCorrida[i].frequencia);
        printf("Digite a temperatura: ");
        scanf("%f", &registroCorrida[i].temperatura);
        printf("Digite a elevacao: ");
        scanf("%f", &registroCorrida[i].elevacao);
    }

    findByType(registroCorrida, 2, 1);

    printf("\nMedia: %f" , calcularMedia(registroCorrida, 2));
    printf("\nMaior Frequencia: %f" , maiorFrequencia(registroCorrida, 2));

}
