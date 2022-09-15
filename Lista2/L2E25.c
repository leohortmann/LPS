#include <stdio.h>

int main(void)
{

    int a, b, i, result;

    scanf("%d", &a);
    scanf("%d", &b);

    for (i = 1; i <= b; i++)
    {
        result = a * a;
    }
    printf("%d", result);
}