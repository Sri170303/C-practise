//WAP to swap values of two int variables

#include <stdio.h>
int main(){
    int a,b,temp;
    a=14,b=45;
    printf("Before swapping a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;

}