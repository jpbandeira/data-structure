#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main() {
	TJogoDeFutebol *jogoDeFutebol = criar();

	printf("%i", jogoDeFutebol->placarTimeLadoEsquerdo);
	return 0;
}