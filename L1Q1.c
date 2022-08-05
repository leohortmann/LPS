#include <stdio.h>

int main(void) {
    int num1, tecla;
    float num2;
    
    scanf("%d\n",&num1);
    printf("%d\n",num1);
    
    tecla = getchar();
    printf("%d %c\n",tecla,tecla);
    
    scanf("%f",&num2);
    printf("%.2f\n", num2);
    
}
