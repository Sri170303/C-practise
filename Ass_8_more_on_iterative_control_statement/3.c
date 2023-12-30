// program to print first n natural numbers in reverse order

#include <stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        printf("%d\n",i);
    }
    return 0;
}