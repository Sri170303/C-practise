// WAP to check whether a given number is an even or an odd number

#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if (x%2)
    printf("Odd");
    else
    printf("Even");
    return 0;
}