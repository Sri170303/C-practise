//WAP to check whether a given number is odd or even without using % operator

#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if ((x/2)*2==x)
    printf("Even");
    else
    printf("Odd");
    return 0;
}