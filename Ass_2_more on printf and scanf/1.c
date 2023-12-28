// WAP to calculate average of three integers. Numbers are given by the user.

#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter three numbers : ");
    scanf("%f %f %f",&a,&b,&c);
    printf("Average of three numbers is %f",(a+b+c)/3);
    return 0;
}
