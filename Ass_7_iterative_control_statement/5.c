// program to print first 10 odd numbers in reverse order

#include <stdio.h>
int main(){
    int i=10;
    while (i){
        printf("%d ",2*(i)-1);
        i--;
    }
    return 0;
}