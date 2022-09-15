#include <stdio.h>

int main(void)
{

    int x = 5, y = -10;
    printf("x=%d y=%d\n", x, y);
    y += x + x + x;
    x = x - x - x - x;

    printf("x=%d y=%d\n", x, y);
}
