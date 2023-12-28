// WAP to print a given number without its last digit
#include <stdio.h>
int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    printf("The given number without its last digit is %d",a/10);
    return 0;
}