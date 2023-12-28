// WAP to check whether a given number is divisible by 5 or not

#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if (x%5)
    printf("Not divisible by 5");
    else
    printf("Divisible by 5");
    return 0;
}