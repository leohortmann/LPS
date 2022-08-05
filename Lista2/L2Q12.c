#include <stdio.h>

void decToBin(char vet[],int num) {

    int i=31;

    if(num==0){
        printf("0");
        return;
    }


    if (num>0){
        for (;num>0;){
            if(num%2!=0){
             vet[i--]='1';
            } else {
                vet[i--]='0';
            }
            num/=2;
        }
        for(;i>=0;i--){
            vet[i]='0';
        }
    }
    if (num<0){
        num*=-1;
        for (;num>0;){
            if(num%2!=0){
             vet[i--]='0';
            } else {
                vet[i--]='1';
            }
            num/=2;
        }
        for(;i>=0;i--){
            vet[i]='1';
        }
        vet[31]='1';
    }

 
 vet[32]='\0';
}

int main(void) {
    char str[33];
    int num;

    scanf("%d",&num);

    decToBin(str,num);

    printf("%s\n",str);


    return 0;



}






