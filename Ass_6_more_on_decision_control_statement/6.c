// WAP to check whether a given number is divisible by 3 or divisible by 7

#include <stdio.h>
int main(){
    int x;
    printf("Enter any integer : ");
    scanf("%d",&x);
    if (x%3&&x%7){
        printf("Not Divisible by 3 or 7");
    }
    else{
        printf("Divisible by 3 or 7");
    }
    return 0;
}