// program to print square of first n natural number
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter n(n>0) : ");
    scanf("%d",&n);
    while (n){
        sum=sum+n*n;
        n--;
    }
    printf("Sum of squares of first n natural numbers is %d",sum);
    return 0;
}