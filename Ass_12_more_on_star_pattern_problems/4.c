#include <stdio.h>
int main(){
    for (int i=1;i<=4;i++){
        int k=1;
        for (int j=1;j<=7;j++){
            if (j<=4-i || j>= 4+i){
                printf("  ");
            }
            else{
                if (j<4){
                    printf("%d ",k);
                    k++;
                }
                else{
                    printf("%d ",k);
                    k--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}