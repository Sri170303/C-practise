// WAP to make the last digit stored in a given number as zero
#include <stdio.h>
int main(){
    int a;
    printf("Enter a integer : ");
    scanf("%d",&a);
    a=(a/10)*10;
    printf("The number with its last digit changed to 0 is %d",a);
    return 0;
}