#include <stdio.h>

int resetBit(int nro, int bit)
{
    int mask = 0;

    mask = 1 << bit;
    mask = ~mask;
    nro = mask & nro;

    return nro;
}

int main(void)
{
    int num, bit;
    scanf("%d %d", &num, &bit);
    printf("%d\n", resetBit(num, bit));
}
