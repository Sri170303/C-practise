// program to print factorial of a given number

#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter n (n>0) : ");
    scanf("%d",&n);
    while (n){
        fact=fact*n;
        n--;
    }
    printf("factorial of n is %d",fact);
    return 0;
}