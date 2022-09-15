#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double x1, x2;
    scanf("%d %d %d", &a, &b, &c);

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / 2 * a;
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / 2 * a;

    printf("%.2f\n%.2f\n", x1, x2);
}