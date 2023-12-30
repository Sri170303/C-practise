// program to print sum of first n odd numbers

#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter n(n>0) : ");
    scanf("%d",&n);
    while (n){
        sum=sum+(2*n-1);
        n--;
    }
    printf("Sum of first n odd natural numbers is %d",sum);
    return 0;
}