// WAP to input a three digit number and display the sum of digits
#include <stdio.h>
int main(){
    int a,digits_sum;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    digits_sum = digits_sum + a%10;
    a=a/10;
    digits_sum = digits_sum + a%10;
    a=a/10;
    digits_sum = digits_sum + a%10;
    printf("The sum of digits is %d",digits_sum);
    return 0;
    
}