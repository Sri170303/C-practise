// WAP to print size of an int, a float, a char and a double type variable
#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    printf("The size of an int type variable is %d",sizeof(a));
    printf("\nThe size of an float type variable is %d",sizeof(b));
    printf("\nThe size of an char type variable is %d",sizeof(c));
    printf("\nThe size of an double type variable is %d",sizeof(d));
    return 0;
}