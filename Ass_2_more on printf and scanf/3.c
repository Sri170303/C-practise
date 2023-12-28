// WAP to calculate the simple interest

#include <stdio.h>
int main(){
    float p,r,t;
    printf("Enter p, r and t : ");
    scanf("%f %f %f",&p,&r,&t);
    float si=(p*r*t)/100;
    printf("SI = %f",si);
    return 0;
}