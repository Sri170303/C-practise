// WAP which takes the strength of the sides of a triangle as input. 
// Display whether the triangle is valid or not

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides length : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a<(b+c)&&b<(c+a)&&c<(a+b)){
        printf("The sides can form a triangle ");
    }
    else{
        printf("The sides don't form a valid triangle");
    }
    return 0;
}