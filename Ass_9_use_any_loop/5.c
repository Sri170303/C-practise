// program to print cube of first n natural numbers

#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter n(n>0) : ");
    scanf("%d",&n);
    while (n){
        sum=sum+n*n*n;
        n--;
    }
    printf("Sum of cubes of first n natural numbers is %d",sum);
    return 0;
}