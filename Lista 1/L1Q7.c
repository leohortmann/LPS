#include <stdio.h>

int main(void) {

    int entrada, maiorNum, menorNum;
    
    scanf("%d", &entrada);
    menorNum=entrada;
    maiorNum=entrada;
    
    while (entrada !=0) {
        scanf("%d", &entrada);
        if (entrada!=0 && entrada>maiorNum) {
            maiorNum = entrada;
        }
        if (entrada!=0 && entrada<menorNum) {
            menorNum = entrada;
        }
    };

    printf("%d\n", menorNum);
    printf("%d", maiorNum);



    return 0;

}
