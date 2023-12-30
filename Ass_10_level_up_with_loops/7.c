// program to print prime numbers between two given numbers

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);

    for (int i=a;i<b;i++){
        int count = 1;
        for(int j=2;j<(i/2);j++){
            if (i%j==0){
                count++;
            }
        }
        if (count==1){
            printf("%d ",i);
        }
    }

    return 0;
}