#include <stdio.h>

char concat(char a[], char b[])
{

    int i = 0, j = 0;

    while (a[i] != '\0')
    {
        i++;
    }

    while (i <= 100 && b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';

    return a;
}

int main()
{

    char a[100], b[100];

    scanf("%s", &a);
    scanf("%s", &b);

    concat(a, b);
    printf("%s", a);
}
