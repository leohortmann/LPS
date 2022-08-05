#include <stdio.h>

int main(void) {

    int mat[3][3];
    int soma,i,j;


    for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for (i=0;i<3;i++) {

        soma=0;
        for (j=0;j<3;j++){
            soma+=mat[i][j];

        }
        if (j==3){
            printf("%d", soma);
            printf("\n");
        }

    }

}
