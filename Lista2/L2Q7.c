#include <stdio.h>


int setBit(int nro, int bit)
{
    int mask=0;

    mask = 1<<bit;
    nro=mask | nro;

    return nro;



}

int main(void) {
    int num,bit;
    scanf("%d %d",&num,&bit);
    printf("%d\n",setBit(num,bit));
}
