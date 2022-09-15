#include <stdio.h>

int main(void)
{

    float entrada;
    int inteiro;

    scanf("%f", &entrada);

    inteiro = entrada;

    if (entrada - inteiro >= 0.5)
    {
        inteiro += 1;
    }

    printf("%d", inteiro);
}
