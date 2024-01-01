#include <stdio.h>
int main(){
    for (int i=1;i<=4;i++){
        int n=1;
        for (int j=1;j<=7;j++){
            if (j<=5-i || j>=3+i){
                if (j<5-i){
                    printf("%d",n);
                    n++;
                }
                else if(j==5-i ){
                    if (j==4){
                        printf("%d",n);
                        n--;
                    }
                    else{
                        printf("%d",n);
                    }
                }
                else{
                    printf("%d",n);
                    n--;
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}