// program to reverse a given number

#include <stdio.h>
int main(){
    int n, count=0;
    printf("Give me any natural number : ");
    scanf("%d",&n);
    int n_copy = n;

    //To count number of digits
    while (n){
        count++;
        n/=10;
    }
    
    int num_rev=0;
    while (count){
        int multiplier=1;
        int k = count-1;
        while (k){
            multiplier = multiplier * 10 ;
            k--;
        }
        num_rev = num_rev + (n_copy % 10) * multiplier ;
        n_copy/=10;
        count--;
    }

    printf("\nAfter reversing we get %d\n",num_rev);

    return 0;
}