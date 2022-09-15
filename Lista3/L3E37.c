#include <stdio.h>

void changeCase(char a[])
{
    int i = 0, j = 0;

    while (a[i] != '\0' && a[i] >= 32 && a[i] <= 126)
    {
        i++;
    }

    for (j = 0; j < i; j++)
    {

        if (a[j] >= 'A' && a[j] <= 'Z')
        {
            a[j] += 32;
        }
        else if (a[j] >= 'a' && a[j] <= 'z')
        {
            a[j] -= 32;
        }
    }
}

int main()
{
    char a[30];

    scanf("%[^\n]s", &a);

    changeCase(a);
    printf("%s", a);
}
