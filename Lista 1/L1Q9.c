#include <stdio.h>

int main(void) {

    int mat[5][5];
    int i,j,k;


    for (i=0;i<5;i++) {
        for (j=0;j<5;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    i=0;
    j=0;
    k=0;

   while (i!=4 || j!=4) {

    printf("%d\n", mat[i][j]);
// menor que 100
    if (mat[i][j]<100 && mat[i][j] %2 != 0) {
        k++;
        j--;
    } else if (mat[i][j]<100 && mat[i][j] %2 == 0) { 
        k++;
        i--;

// maior que 100
    } else if (mat[i][j]>100 && mat[i][j] %2 != 0) { 
        k++;
        j++;

    } else if (mat[i][j]>100 && mat[i][j] %2 == 0) { 
        k++;
        i++;
    }
   }
   printf("%d", mat[i][j]);

}
