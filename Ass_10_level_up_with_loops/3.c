// program to check whether a given number is a fibonacci number or not
#include <stdio.h>
int main(){
    int n, a = 0, b = 1; 
    printf("Enter n ( greater than 0 ): ");
    scanf("%d",&n);

    if (n==0 || n==1){
        printf("Yes, its in fibonacci series");
    }
    else{
        while(1){

            int temp = a;
            a = b;
            b = a + temp ;

            if (a==n){
                printf("Yes, it's in fibonacci series.");
                break;
            }
            if (a>n && a!=n){
                printf("No, it's not in fibonacci series.");
                break;
            }

        }
    }

    
    
    return 0;
}