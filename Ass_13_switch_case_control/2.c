// program to perform add, sub, mul or div according to user input

#include <stdio.h>
int main(){
    
    
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    

    repeat:
        printf("Enter your choice : ");
        int n;
        scanf("%d",&n);

        switch(n){
            case 1:
                {
                    printf("Enter two numbers : ");
                    float a,b;
                    scanf("%f %f",&a,&b);
                    printf("Sum = %f",a+b);
                    break;
                }
            case 2:
                {
                    printf("Enter two numbers : ");
                    float a,b;
                    scanf("%f %f",&a,&b);
                    printf("Difference = %f",a-b);
                    break;
                }
            case 3:
                {
                    printf("Enter two numbers : ");
                    float a,b;
                    scanf("%f %f",&a,&b);
                    printf("Product = %f",a*b);
                    break;
                }
            case 4:
                {
                    printf("Enter two numbers : ");
                    float a,b;
                    scanf("%f %f",&a,&b);
                    printf("Sum = %f",a/b);
                    break;
                }
            case 5:
                break;
            default:
                printf("Invalid choice entered\n");
                goto repeat;
        }

    return 0;

}