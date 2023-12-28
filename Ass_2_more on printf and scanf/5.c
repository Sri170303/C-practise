// WAP to ask user about cost price and selling price of banana per dozen.
// calculte the profit and loss earned upon selling 25 bananas

#include <stdio.h>
int main(){
    float cp,sp;
    printf("Enter CP and SP of bananas per dozen  : ");
    scanf("%f %f",&cp,&sp);
    float profit = (sp-cp)*(25.0/12);
    printf("The profit earned upon selling 25 bananas is %f",profit);
    return 0;
}