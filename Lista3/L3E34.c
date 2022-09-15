#include <stdio.h>

int searchChar(char vet[], char a)
{
    int i = 0;

    while (vet[i] != a)
    {
        i++;
    }

    if (i > 100)
    {
        i = -1;
    }

    return i;
}

int main()
{
    char vet[100];
    char a;

    scanf("%s", &vet);
    scanf(" %c", &a);

    printf("%d", searchChar(vet, a));
}
