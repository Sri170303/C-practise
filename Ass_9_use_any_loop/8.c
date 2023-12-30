//program to check whether a given number is prime or composite

#include <stdio.h>
int main(){
    int n,i=2,factors=2;
    printf("Enter n(n>0) : ");
    scanf("%d",&n);
    while (i<(n/2)){
        if (n%i==0){
            factors=factors+1;
        }
        i++;
    }
    
    if (factors>2){
        printf("n is composite");
    }
    else{
        printf("n in prime");
    }
    
    return 0;
}