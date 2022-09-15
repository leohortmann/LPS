#include <stdio.h>

void decToBin(char vet[], int num)
{

    int i = 31;

    if (num == 0)
    {
        printf("0");
        return;
    }

    if (num > 0)
    {
        for (; num > 0;)
        {
            if (num % 2 != 0)
            {
                vet[i--] = '1';
            }
            else
            {
                vet[i--] = '0';
            }
            num = num >> 1;
        }
    }
    else if (num < 0)
    {
        num *= -1;
        for (; num > 0;)
        {
            if (num % 2 != 0)
            {
                vet[i--] = '0';
            }
            else
            {
                vet[i--] = '1';
            }
            num = num >> 1;
        }
        for (; i >= 0; i--)
        {
            vet[i] = '1';
        }
        vet[31] = '1';
    }

    vet[32] = '\0';
}

int main(void)
{
    char str[33] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '\0'};
    int i = 0, num = 3;

    scanf("%d", &num);

    decToBin(str, num);

    while (i < 32 && str[i] != '1')
    {
        i++;
    }
    for (; i <= 32 && str[i] > 0; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
