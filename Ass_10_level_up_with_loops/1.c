// program to find nth fibonacci number
#include <stdio.h>
int main(){
    int n, a = 0, b = 1; 
    printf("Enter n : ");
    scanf("%d",&n);

    for (int i=1;i<n;i++){
        int temp = a;
        a = b;
        b = a + temp ;
    }
    if (n==2)
        printf("Nth term of fibonacci series is 1");
    
    else
        printf("Nth term of fibonacci series is %d",a);
    
    
    return 0;
}
