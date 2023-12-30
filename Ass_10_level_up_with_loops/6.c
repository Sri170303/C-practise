// program to print prime numbers between 1 to 100

#include <stdio.h>
int main(){
    
    for (int i=2;i<100;i++){
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