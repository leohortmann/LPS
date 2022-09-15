#include <stdio.h>

int countStr(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{

    char str[1000];

    scanf("%s", &str);
    printf("%d", countStr(str));
}
