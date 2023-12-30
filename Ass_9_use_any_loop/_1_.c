// program to print sum of first n natural number

#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter n(n>0) : ");
    scanf("%d",&n);
    while (n){
        sum=sum+n;
        n--;
    }
    printf("Sum of first n natural numbers is %d",sum);
    return 0;
}
