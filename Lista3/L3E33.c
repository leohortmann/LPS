#include <stdio.h>

int compare(char a[], char b[])
{
    int i = 0, j = 0, k = 0;
    int valueA = 0, valueB = 0;

    while (a[j] != '\0')
    {
        j++;
    }

    for (i = 0; i <= j; i++)
    {

        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }

    while (b[k] != '\0')
    {
        k++;
    }

    for (i = 0; i <= k; i++)
    {

        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] += 32;
        }
    }
    if (j < k)
    {
        j = k;
    }

    for (i = 0; i <= j; i++)
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

    char a[30] = "Asas", b[30] = "aSa";

    scanf("%s", &a);
    scanf("%s", &b);

    printf("%d", compare(a, b));
}