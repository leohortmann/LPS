#include <stdio.h>

int compare(char a[], char b[])
{
    int i = 0, j = 0;
    int valueA = 0, valueB = 0;

    while (a[j] != '\0' && b[j] != '\0')
    {
        j++;
    }

    for (; i <= j; i++)
    {
        valueA += a[i];
        valueB += b[i];
    }

    if (valueA == valueB)
    {
        i = 0;
    }
    else if (valueA > valueB)
    {
        i = 1;
    }
    else if (valueA < valueB)
    {
        i = -1;
    }

    return i;
}
int main()
{

    char a[100], b[100];

    scanf("%s", &a);
    scanf("%s", &b);

    printf("%d", compare(a, b));
}
