// program to print first n odd natural numbers

#include <stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\n",2*(i+1)-1);
    }
    return 0;
}