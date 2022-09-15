#include <stdio.h>

int isBit(int nro, int bit)
{
    int mask = 1 << bit;

    mask = mask & bit;

    if (mask >= bit)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int num, bit;
    scanf("%d %d", &num, &bit);
    printf("%d\n", isBit(num, bit));
}