#include <stdio.h>

int main()
{
    char a[30];
    int i = 0, j = 0;

    scanf("%s", &a);

    while (a[i] != '\0')
    {
        i++;
    }
    j = i - 1;

    for (; j >= 0 && a[j] != 0; j--)
    {
        printf("%c", a[j]);
    }
    // printf("%c", a[i]);
}
