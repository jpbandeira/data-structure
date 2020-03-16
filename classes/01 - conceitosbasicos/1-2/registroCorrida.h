#ifndef REGISTROCORRIDA_H_INCLUDED
#define REGISTROCORRIDA_H_INCLUDED

typedef struct RegistrosCorrida TRegistroCorrida;
TRegistroCorrida *criar(int quantidade);
float calcularMedia(TRegistroCorrida *registroCorrida, int quantidadeParaCalculo);
float maiorFrequencia(TRegistroCorrida *registroCorrida, int quantidadeParaVetor);
void findByType(TRegistroCorrida *registroCorrida, int quantidadeParaVetor, int defineRetorno);


#endif // REGISTROCORRIDA_H_INCLUDED
