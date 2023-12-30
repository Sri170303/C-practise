// program to print all armstrong numbers in between 1 to 1000

#include <stdio.h>
int main(){
    for (int i=1; i<1000; i++){
        
        int n = i;
        
        int n_copy = n, count=0;
        while (n){
            count++;
            n/=10;
        }

        
        int armstrong_check = 0, n_copy2 = n_copy;
        for (int k=1;k<=count ;k++){
            int test_case = 1;
            for (int i=1;i<=count;i++){
                test_case = test_case * (n_copy%10);
            }
            armstrong_check = armstrong_check + test_case ;
            n_copy /=10;
        }

        if (n_copy2 == armstrong_check){
            printf("%d ",armstrong_check);
        }
        }

        return 0;

    
}