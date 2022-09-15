#include <stdio.h>

int main(void)
{

    int entrada;

    entrada = 1;

    while (entrada != 0)
    {
        scanf("%d", &entrada);
        if (entrada % 2 == 0 && entrada != 0)
        {
            printf("%d par\n", entrada);
        }
        else if (entrada % 2 != 0 && entrada != 0)
        {
            printf("%d impar\n", entrada);
        }
    }
}