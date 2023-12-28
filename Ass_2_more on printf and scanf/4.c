// Write a program to calculate volume of a cuboid

#include <stdio.h>
int main(){
    float l,b,h;
    printf("Enter the length, breadth and height : ");
    scanf("%f %f %f",&l,&b,&h);
    printf("Volume of cuboid = %f",l*b*h);
    return 0;
}