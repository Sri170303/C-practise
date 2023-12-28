// WAP to check whether roots of a given quadratic equation are real and distinct, real and equal or imaginary roots

#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter a, b and c : ");
    scanf("%f %f %f",&a,&b,&c);
    if (b*b<4*a*c){
        printf("Roots are imaginary");
    }
    else if (b*b>4*a*c){
        printf("Roots are real and distinct");
    }
    else{
        printf("Roots are real and equal");
    }
    return 0;
}