// WAP to swap values of two int variables without using a third variable and without using + or - operator

#include <stdio.h>
int main(){
    int a,b,temp;
    a=14,b=45;
    printf("Before swapping a=%d and b=%d",a,b);
    //temp=a;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;

}