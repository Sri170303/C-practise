// WAP to check whether a given number is divisible by 3 and divisible by 2

#include <stdio.h>
int main(){
    int x;
    printf("Enter any integer : ");
    scanf("%d",&x);
    if (x%3){
        printf("Not Divisible by 3");
    }
    else{
        printf("Divisible by 3");
    }
    return 0;
}