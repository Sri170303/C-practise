// WAP to check whether a given year is a leap year or not 

#include <stdio.h>
int main(){
    int a;
    printf("Enter the year : ");
    scanf("%d",&a);
    if (a%100){
        if (a%4){
            printf("Not a leap year");
        }
        else{
            printf("Leap year");
        }
    }
    else{
        if (a%400){
            printf("Not a leap year");
        }
        else{
            printf("Leap year");
        }
    }
}