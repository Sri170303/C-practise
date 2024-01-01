#include <stdio.h>
int main(){
    for (int i=1;i<=4;i++){
        char c='A';
        for (int j=1;j<=7;j++){
            if (j<i || j>8-i){
                printf(" ");
            }
            else{
                if (j<4){    
                    printf("%c",c);
                    c++;
                }
                else{
                    printf("%c",c);
                    c--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}