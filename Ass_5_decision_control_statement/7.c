// WAP to print greater between two numbers. Print one number if both are the same 

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if (a>=b)
    printf("%d",a);
    else
    printf("%d",b);
    return 0;
}