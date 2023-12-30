// program to print next prime number of given number
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=n+1;;i++){
        int count = 1;
        for(int j=2;j<(i/2);j++){
            if (i%j==0){
                count++;
            }
        }
        if (count==1){
            printf("%d ",i);
            break;
        }
    }

    return 0;
}