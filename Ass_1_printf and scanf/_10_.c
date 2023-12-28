//  WAP to find the area of a circle. The radius is given as input by the user 
// Output Format - "Area of circle is A having the radius R". Replace A with area and R with radius
#include <stdio.h>
int main(){
    float rad;
    printf("Enter the radius of circle : ");
    scanf("%f",&rad);
    printf("Area of the circle is %f having the radius %f",3.14*rad*rad,rad);
    return 0;
}