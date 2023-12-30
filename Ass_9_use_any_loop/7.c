// prorgam to count number of digits in a number

#include <stdio.h>
int main(){
    int n,count=0;
    printf("Enter n(n>0) : ");
    scanf("%d",&n);
    while (n){
        n/=10;
        count++;
    }
    printf("Number of digits in n is %d",count);
    return 0;
}