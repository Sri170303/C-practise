// program to print multiplication table for number n

#include <stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}