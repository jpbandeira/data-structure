#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

struct Jogo {
	char team1[30];
	char team2[30];
	int placarTime1;
	int placarTime2;
};

TJogo* criar(char time1[30], char time2[30], int placarTime1, int placarTime2){
	TJogo *s = (TJogo *)malloc(sizeof(TJogo));
	s -> time1 = time1;
	s -> time2 = time2;
	s -> scoreboard.placarTime1 = placarTime1;
	s -> scoreboard.placarTime2 = placarTime2;
}

TJogo* vencedor(TJogo *jogo){
	if(jogo -> jogo.placarTime1 > jogo -> jogo.placarTime2){
		printf("Vencedor: %s\n", jogo -> placarTime1);
	}
	else if(jogo -> jogo.placarTime2 > jogo -> jogo.placarTime1){
		printf("Vencedor: %s\n", jogo -> placarTime2);
	}
	else
		printf("Empate...!\n");
}

int * goleada(TJogo *jogo){
	if(jogo -> jogo.placarTime1 - jogo -> jogo.placarTime2 > 3 || 
	   jogo -> jogo.placarTime2 - jogo -> jogo.placarTime1 > 3)
	   return 1;
	else
		return 0;
}
