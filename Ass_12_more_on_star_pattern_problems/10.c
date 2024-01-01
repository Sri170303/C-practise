#include <stdio.h>
int main(){
    for (int i=1;i<=4;i++){
        char c='A';
        for (int j=1;j<=7;j++){
            if (j<=5-i || j>=3+i){
                if (j<5-i){
                    printf("%c",c);
                    c++;
                }
                else if(j==5-i ){
                    if (j==4){
                        printf("%c",c);
                        c--;
                    }
                    else{
                        printf("%c",c);
                    }
                }
                else{
                    printf("%c",c);
                    c--;
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