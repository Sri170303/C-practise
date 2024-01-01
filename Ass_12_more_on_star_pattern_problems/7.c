#include <stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        int k=1,n=1;
        for (int j=1;j<=9;j++){
            if (j<=5-i || j>= 5+i){
                printf(" ");
            }
            else{
                if (k){
                    if (j<4){
                        printf("%d",n);
                        n++;
                        k=1-k;
                    }
                    else if (j==4){
                        printf("%d",n);
                        k=1-k;
                    }
                    else{
                        printf("%d",n);
                        n--;
                        k=1-k;
                    }
                }
                else{
                    printf(" ");
                    k=1-k;
                }
            }
        }
        printf("\n");
    }
    return 0;
}