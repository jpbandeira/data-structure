#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento{
    int numero1;
}TElemento;

void func(TElemento *elemento){
    printf("\n\n%d\n\n", elemento->numero1);
}

int main()
{
    TElemento elemento;
    elemento.numero1 = 18;
    func(&elemento);

    TElemento *elementoPonteiro;
    elementoPonteiro = (TElemento *) malloc(sizeof(TElemento));
    elementoPonteiro->numero1 = 38;
    func(elementoPonteiro);

    return 0;
}
