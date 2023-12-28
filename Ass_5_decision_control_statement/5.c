// WAP to check whether a given number is even or odd using a bitwise operator

#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if (x&1)
    printf("Odd");
    else
    printf("Even");
    return 0;
}