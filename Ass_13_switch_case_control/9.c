#include <stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch(c){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("\nVowel\n");
            break;
        case 'b' ... 'd': case 'f' ... 'h':
        case 'j' ... 'n': case 'p' ... 't':
        case 'v' ... 'z': case 'B' ... 'D': 
        case 'F' ... 'H': case 'J' ... 'N': 
        case 'P' ... 'T': case 'V' ... 'Z':  
            printf("\nConsonant\n");
            break;
        default:
            printf("\nSpecial Character\n");
    }
    return 0;
}