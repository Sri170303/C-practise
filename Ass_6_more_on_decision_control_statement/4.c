// WAP to check whether a given letter is uppercase or lowercase

#include <stdio.h>
int main(){
    char c;
    printf("Enter an letter from english : ");
    scanf("%c",&c);
    if (c>='A'&&c<='Z'){
        printf("Upper case letter");
    }
    else if(c>='a'&&c<='z') {
        printf("Lower case letter");
    }
    return 0;
}