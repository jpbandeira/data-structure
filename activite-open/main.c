#include <stdio.h>
#include <stdlib.h>

void main(){
    const int QTD = 2;

    float frequenciaCardiaca[QTD], temperaturaCorporal[QTD], elevacaoTerreno[QTD];
    float somaTemperatura, maiorFrequencia, diferenca;
    int i;

    printf("\n Digite os dados: \n");
    for (i = 0; i < QTD; i++){
        printf("\n %d Digite os dados da frequencia: \n", i);
        scanf("%f", &frequenciaCardiaca[i]);
        printf("\n %d Digite os dados da temperatura: \n", i);
        scanf("%f", &temperaturaCorporal[i]);
        printf("\n %d Digite os dados da elevacao do terreno: \n", i);
        scanf("%f", &elevacaoTerreno[i]);

        if(frequenciaCardiaca[i] > maiorFrequencia){
            maiorFrequencia = frequenciaCardiaca[i];
        }

        somaTemperatura = somaTemperatura + temperaturaCorporal[i];

    }

    printf("***************************************************************************\n");

    for (i = 0; i < QTD; i++){
        printf("\n Frequencia %d: %f",i,frequenciaCardiaca[i]);
        printf("\n Temperatura %d: %f",i,temperaturaCorporal[i]);
        printf("\n Elevação %d: %f",i,elevacaoTerreno[i]);
    }

    printf("***************************************************************************\n");
pe-7s-way
    diferenca = elevacaoTerreno[QTD - 1] - elevacaoTerreno[0];

    printf("\n Maior frequencia cardiaca: %f", maiorFrequencia);
    printf("\n Media temperatura corporal: %f", somaTemperatura/QTD);
    printf("\n Diferença de elevação: %f", diferenca);

}
