// WAP a program to time as input from the user in given below format and display the result as given below
// User input date format - "HH:MM"
// Output format - "HH hour and MM Minute"

#include <stdio.h>
int main(){
    int hh,mm;
    printf("Enter the time in HH:MM format : ");
    scanf("%d:%d",&hh,&mm);
    printf("%d Hour and %d Minute",hh,mm);
    return 0;
}