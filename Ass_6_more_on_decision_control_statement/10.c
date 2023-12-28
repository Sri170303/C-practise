// WAP which takes the month number as input and display number of days in that month

#include <stdio.h>
int main(){
    int x;
    printf("Enter the month number : ");
    scanf("%d",&x);
    if (x==1||x==3||x==5||x==7||x==8||x==10||x==12){
        printf("31 days");
    }
    else if (x==2){
        printf("28 or 29 days");
    }
    else{
        printf("30 days");
    }
    return 0;
}