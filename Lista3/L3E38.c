#include <stdio.h>

int main()
{

    int i = 0, j = 0, length;
    char a[30];

    scanf("%[^\n]s", &a);

    length = strlen(a);

    for (i = 0; i < length; i++)
    {

        for (j = 0; j < i && a[j] != 0; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }
}
