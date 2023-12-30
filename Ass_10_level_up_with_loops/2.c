// program to print first n terms of fibonacci series

#include <stdio.h>
int main(){
    int n, a = 0, b = 1; 
    printf("Enter n (greater than 1) : ");
    scanf("%d",&n);

    printf("%d ",0);
    for (int i=1;i<n;i++){

        int temp = a;
        a = b;
        b = a + temp ;

        printf("%d ",a);

    }
    
    
    return 0;
}