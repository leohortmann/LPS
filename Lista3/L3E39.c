#include <stdio.h>

int main()
{

    int i = 0, j = 0, length, k = -1;
    char a[30] = "pedra";

    scanf("%[^\n]s", &a);

    length = strlen(a);

    for (i = length; i >= 0; i-- && k++)
    {

        for (j = 0; j < length && a[j] != 0; j++)
        {
            if (j > k)
            {
                printf("%c", a[j]);
            }
        }
        printf("\n");
    }
}