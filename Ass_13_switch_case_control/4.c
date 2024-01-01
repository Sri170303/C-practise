#include <stdio.h>
int main(){
    int n,a,b,c;
    printf("1. Check for isosceles triangle\n");
    printf("2. Check for right angled trianle\n");
    printf("3. Check for equilateral triangle\n");
    printf("4. Exit\n");
    

    repeat:
        printf("\nEnter your choice : ");
        scanf("%d",&n);
        
        switch (n)
        {
        case 1:
            {
                printf("Enter three numbers : ");
                scanf("%d %d %d",&a,&b,&c); 
                if (a!=b && b!=c && a<b+c && b<a+c && c<a+b)
                    printf("Valid Isosceles Triangle\n");
                else
                    printf("Invalid Isosceles Triangle\n");
                goto repeat;
            }
        case 2:
            {
                printf("Enter three numbers : ");
                scanf("%d %d %d",&a,&b,&c);
                if ((a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b) && a<b+c && b<a+c && c<a+b)
                    printf("Valid Right-Angled Triangle\n");
                else
                    printf("Invalid Right-Angled Triangle\n");
                goto repeat;
            }
        case 3:
            {   
                printf("Enter three numbers : ");
                scanf("%d %d %d",&a,&b,&c);
                if ((a==b && b==c) && (a<b+c && b<a+c && c<a+b))
                    printf("Valid Equilateral Triangle\n");
                else
                    printf("Invalid Equilateral Triangle\n");
                goto repeat;
            }
        case 4:
            break;
        default :
            printf("Invalid choice entered\n");
            goto repeat;
        }

    return 0;
}