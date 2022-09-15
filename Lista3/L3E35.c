#include <stdio.h>

int search(char a[], char b[])
{
    int i = 0, j = 0, charFound;

    while (a[0] != b[i] && b[i] != '\0')
    {
        i++;
    }
    if (b[i] == '\0')
    {
        return (-1);
    }
    else
    {
        charFound = i;
    }
    while (b[i] == a[j] && b[i] != '\0' && a[j] != '\0')
    {
        i++;
        j++;
    }
    if (a[j] == '\0')
    {
        return charFound;
    }
    else
    {
        return (-1);
    }
}

int main()
{
    char a[30] = "cama", b[30] = "bacana";
    // a vai ser buscada em b

    scanf("%s", &a);
    scanf("%s", &b);

    printf("%d", search(a, b));
}
