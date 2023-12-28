// WAP to find the greatest among three given numbers. Print number once if the greatest number appears two or three times

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b){
        if (a>=c){
            printf("The greatest is %d",a);
        }
        else
            printf("The greatest is %d",c);
    }
    else{
        if (b>=c){
            printf("The greatest is %d",b);
        }
        else{
            printf("The greatest is %d",c);
        }
    }
    return 0;

}