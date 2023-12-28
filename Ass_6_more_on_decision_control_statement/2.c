// WAP that takes cost price and selling price of a product from the user. 
// Now calculate and print profit or loss percentage

#include <stdio.h>
int main(){
    float cp,sp;
    printf("Enter the CP and SP : ");
    scanf("%f %f",&cp,&sp);
    if (cp>sp)
    {
        printf("There is a loss of %f%%",(cp-sp)/cp*100);
    }
    else{
        printf("There is a profit 0f %f%%",(sp-cp)/cp*100);
    }
    return 0;
}