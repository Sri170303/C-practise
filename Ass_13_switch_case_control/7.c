#include <stdio.h>
int main(){
    int n;
    printf("1. Factorial of a number\n");
    printf("2. Check even or odd\n");
    printf("3. Area of circle\n");
    printf("4. Sum of first N natural numbers\n");
    printf("5. Exit\n");
    repeat:
        printf("\nEnter your choice : ");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            {
                int n, fact=1;
                printf("Enter N : ");
                scanf("%d",&n);
                for (int k=n;k>1;k--){
                    fact=fact*k;
                }
                printf("Factorial %d is %d\n",n,fact);
            }
            goto repeat;
            
        case 2:
            {
                int n;
                printf("Enter a number : ");
                scanf("%d",&n);
                if (n%2==0){
                    printf("Even\n");
                }
                else{
                    printf("Odd\n");
                }
            }
            goto repeat;

        case 3:
            {
                float r;
                printf("Enter the radius of circle : ");
                scanf("%f",&r);
                printf("Area = %f\n",3.14*r*r);
            }
            goto repeat;

        case 4 :
            {
                int n, sum=0;
                printf("Enter a natural number : ");
                scanf("%d",&n);
                for (int i=n;i>0;i--){
                    sum=sum+i;
                }
                printf("Sum of first %d natural numbers is %d\n",n,sum);
            }
            goto repeat;

        case 5:
            break;

        default :
            printf("Invalid choice\n");
            goto repeat;
        }

    return 0;
}