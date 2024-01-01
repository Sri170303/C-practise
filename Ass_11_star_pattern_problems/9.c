#include <stdio.h>
int main(){
    
    char c='A';
    for (int i=1;i<=5;i++){
        char a=c;
        for (int j=1;j<=5;j++){
            if (j>=i){
                printf("%c ",a);
                a++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        c++;
    }
    return 0;
}