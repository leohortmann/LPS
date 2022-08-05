#include <stdio.h>

int main(void) {

    int mat[3][3];
    int i,j;


    for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
            if (i==j) {
                printf("%d", mat[i][j]);
                if (j!=2) {
                    printf(" ");
                }
            }

            }
        }

    printf("\n");

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i==0 && j==2){
                printf("%d", mat[i][j]);
                printf(" ");
            } else if (i == 1 && j ==1) {
                printf("%d", mat[i][j]);
                printf(" ");
            } else if ( i == 2 && j == 0) {
                printf("%d", mat[i][j]);
            }


        }
    }

}
