// WAP to check whether a given character is an uppercase letter, a lowercase letter, a digit or a special character

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if (c>='A'&&c<='Z'){
        printf("Upper case letter");
    }
    else if (c>='a'&&c<='a'){
        printf("Lower case letter");
    }
    else if (c>='0'&&c<='9'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;

}