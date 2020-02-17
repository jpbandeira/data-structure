#include <stdio.h>
#include <stdlib.h>

void main(){
    // Criada a variavel a e um ponteiro de b
    int a, *b;
    scanf("%i", &a);

    //Apos essa linha o ponteiro b passara a apontar para a posicao de a.
    b = &a;

    //Alterando o valor armazenado em a usando b para apontar para posicao e trocar o valor
    *b = 2*(*b);

    //Apos alocar uma espaço de memoria para b, ele para de apontar para a posicao de a e passa a ter sua propria posicao
    b = malloc(sizeof(a));

    scanf("%i", b);

    //No final do codigo, a deve ter seu valor inicial dobrado e b deve ficar com o valor digtado na linha 18
    printf("\n A: %i B: %i", a, *b);
}
