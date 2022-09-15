#include <stdio.h>

int checkHora(int hora)
{
    if (hora > 23 || hora < 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int checkMinSeg(int hora)
{
    if (hora > 59 || hora < 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(void)
{

    int h1 = 24, m1 = 61, s1 = 61, h2 = 24, m2 = 61, s2 = 61, hr = 0, mr = 0, sr = 0;

    while (checkHora(h1) != 1)
    {
        scanf("%d", &h1);
    }
    while (checkMinSeg(m1) != 1)
    {
        scanf("%d", &m1);
    }
    while (checkMinSeg(s1) != 1)
    {
        scanf("%d", &s1);
    }

    while (checkHora(h2) != 1)
    {
        scanf("%d", &h2);
    }
    while (checkMinSeg(m2) != 1)
    {
        scanf("%d", &m2);
    }
    while (checkMinSeg(s2) != 1)
    {
        scanf("%d", &s2);
    }

    if (h1 >= h2)
    {
        hr = h1 - h2;
    }
    else
    {
        hr = 24 - h2;
    }

    if (m1 >= m2)
    {
        mr = m1 - m2;
    }
    else
    {
        mr = 60 - m2;
        hr -= 1;
    }

    if (s1 >= s2)
    {
        sr = s1 - s2;
    }
    else
    {
        sr = 60 - s2;
        mr -= 1;
    }

    printf("%d:%d:%d", hr, mr, sr);
}
