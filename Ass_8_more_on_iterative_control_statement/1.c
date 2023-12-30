// program to print MySirG n times on the screen

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of time you want to print \"MySirG\" : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("MySirG\n");
    }
    return 0;
}