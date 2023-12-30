// program to print check if the given number is armstrong number of not

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to check if it is an Armstrong number : ");
    scanf("%d",&n);

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
        printf("Yes it's an Armstrong number.");
    }
    else{
        printf("No, it's not an Armstrong number.");
    }

    return 0;

    
}