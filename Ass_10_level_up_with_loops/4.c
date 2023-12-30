// program to find HCF of given two numbers

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

    printf("HCF = %d",hcf);
    return 0;
}