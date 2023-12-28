// WAP to print unit digit of a given number


#include <stdio.h>
int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    printf("Unit digit of given number is %d",a%10);
    return 0;
}