#include <stdio.h>

int main(void)
{

    int entrada, maior, i;

    scanf("%d", &maior);

    for (i = 0; i <= 8; i++)
    {
        scanf("%d", &entrada);

        if (entrada > maior)
        {
            maior = entrada;
            entrada = 0;
        }
        else
        {
            entrada = 0;
        }
    }

    printf("%d", maior);

    return 0;
}