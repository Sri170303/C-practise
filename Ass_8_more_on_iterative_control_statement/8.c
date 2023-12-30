// program to print square of first n natural numbers

#include <stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\n",(i+1)*(i+1));
    }
    return 0;
}