#include <stdio.h>
#include <stdlib.h>

void main(){
    int a, *b;
    scanf("%i", &a);
    b = &a;
    *b = 2*(*b);
    b = malloc(sizeof(a));
    scanf("%i", b);
    printf("\n A: %i B: %i", a, *b);
}
