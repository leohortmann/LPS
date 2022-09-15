#include <stdio.h>

int main(void)
{

    int i, x, midNum, maiorNum, menorNum;
    scanf("%d", &midNum);
    maiorNum = midNum;
    menorNum = midNum;

    while (i < 2)
    {
        scanf("%d", &midNum);
        if (midNum > maiorNum)
        {
            x = maiorNum;
            maiorNum = midNum;
            midNum = x;
        }
        if (midNum < menorNum)
        {
            x = menorNum;
            menorNum = midNum;
            midNum = x;
        }
        i++;
    }

    printf("%d\n", menorNum);
    printf("%d\n", midNum);
    printf("%d", maiorNum);
}