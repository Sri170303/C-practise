// program to check whether two given numbers are co-prime or not

#include <stdio.h>
int main(){
    int a, b, hcf = 1;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    if (a<=b){
        for (int i=2;i<=a;i++){
            if (a%i==0 && b%i==0){
                hcf=i;
            }
        }
    }
    else{
        for (int i=2;i<=b;i++){
            if (a%i==0 && b%i==0){
                hcf=i;
            }
        }

    }

    if (hcf==1 && a!=b){
        printf("Entered numbers are Co-prime.");
    }
    else {
        printf("Numbers are not Co-prime.");
    }


    return 0;
}