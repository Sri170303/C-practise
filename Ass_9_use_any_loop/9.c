// program to print lcm of two natural numbers

#include <stdio.h>
int main(){
    int a,b,lcm,i=2,k;
    printf("Enter two natural number : ");
    scanf("%d %d",&a,&b);
    if (a<=b){
        k=b;
        while (1){
            if(k%b==0&&k%a==0){
                lcm=k;
                break;
            }
            else{
                k++;
            }
        }
    }
    else{
        k=a;
        while (1){
            if(k%b==0&&k%a==0){
                lcm=k;
                break;
            }
            else{
                k++;
            }
        }

    }
    printf("LCM = %d",lcm);
    return 0;
}