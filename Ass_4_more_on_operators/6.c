// Assume 1 USD = INR 84.23 . WAP to take amount in INR and convert it into USD 

#include <stdio.h>
int main(){
    float usd=84.23, amount;
    printf("Enter amount in INR : ");
    scanf("%f",&amount);
    printf("\nThe amount in USD is %f",amount/usd);
    return 0;
}