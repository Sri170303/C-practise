#include <stdio.h>
int main(){
    for (int i=1;i<=4;i++){
        int k=1;
        for (int j=1;j<=7;j++){
            if (j<=4-i || j>= 4+i){
                printf("  ");
            }
            else{
                if (k){
                    printf("* ");
                    k=1-k;
                }
                else{
                    printf("  ");
                    k=1-k;
                }
            }
        }
        printf("\n");
    }
    return 0;
}