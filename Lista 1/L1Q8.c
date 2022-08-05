#include <stdio.h>

int main(void) {

    int i, entrada, soma;
    float media;
    i=0;
    do {
        scanf("%d", &entrada);
        if (entrada!=0){
            soma+=entrada;
            i++;
        }
    } while (entrada!=0);
    media=soma/i;
    printf("%d\n", soma);
    printf("%.2f", media);



}
