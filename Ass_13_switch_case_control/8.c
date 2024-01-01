#include <stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch(c){
        case 'a'...'z':
            printf("Lower-case letter");
            break;
        case 'A'...'Z':
            printf("Upper-case letter");
            break;
        default:
            printf("Special Character");
    }
    return 0;
}