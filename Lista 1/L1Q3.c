#include <stdio.h>

int main(void) {

    int i,white,black,line,column;

    white=0;
    black=1;
    line=0;
    scanf("%d", &i);

    while (line < i) {

        if (line %2 == 0)  {// linha par

            column=0;
            while (column < i) {
                if (column%2 == 0) {
                    printf("%d", white);
                } else {
                    printf("%d", black);
                }
                column++;
            }
        } else { // linha impar

            column=0;
            while (column < i) {
                if (column%2 == 0) {
                    printf("%d", black);
                } else {
                    printf("%d", white);
                }
                column++;
            }
            }

        line++;
        printf("\n");
    }
}
