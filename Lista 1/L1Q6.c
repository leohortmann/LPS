#include <stdio.h>

int main(void) {

    int num1,num2,resultado;
    char op;

    scanf("%d\n", &num1);
    scanf("%c\n", &op);
    scanf("%d", &num2);

    switch (op) {

        case '-':
            resultado=num1-num2;
            break;
        case '*':
            resultado=num1*num2;
            break;
        case '/':
            resultado=num1/num2;
            break;
        default:
            resultado=num1+num2;
            break;
    }

    printf("%d", resultado);

    return 0;

}
