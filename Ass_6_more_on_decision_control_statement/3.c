// WAP to take marks of 5 subjects from the user.
// Assume marks are given out of 100 and passing marks is 33.
// Now display whether the candidate passed the examination or failed

#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the marks of 5 subjects : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (a>32&&b>32&&c>32&&d>32&&e>32){
        printf("Passed");
    }else{
        printf("Failed");
    }
    return 0;
}