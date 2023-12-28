// WAP to input a number from the user and input a digit.
// Append the given digit in the number and print the resulting number
// Example: number = 123, digit = 4 then output should be 1234

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a integer : ");
    scanf("%d",&a);
    printf("Enter a digit : ");
    scanf("%d",&b);
    c=(a*10)+b;
    printf("The number after appending a digit is %d",c);
    return 0;
}