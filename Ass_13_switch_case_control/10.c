#include <stdio.h>
int main(){
    int n;

    printf("1. LCM of two number\n");
    printf("2. Sum of digits of a number\n");
    printf("3. Volume of a cuboid\n");
    printf("4. Check whether a given number is a prime or not\n");
    printf("5. Exit\n");

    repeat:
        printf("\nEnter your choice : ");
        scanf("%d",&n);
        
        switch(n){
            case 1:
                {
                    int a,b,lcm;
                    printf("Enter two numbers : ");
                    scanf("%d %d",&a,&b);
                    if (a>=b){
                        for(int i=a;i<=a*b;i++){
                            if (i%a==0&&i%b==0){
                                lcm=i;
                                break;
                            }
                        }
                    }
                    else{
                        for(int i=b;i<=a*b;i++){
                            if (i%a==0&&i%b==0){
                                lcm=i;
                                break;
                            }
                        }
                    }
                    printf("LCM = %d\n",lcm);
                }
                goto repeat;
            case 2:
                {
                    int num, sum=0;
                    printf("Enter a number : ");
                    scanf("%d",&num);
                    while(num){
                        sum = sum + num%10;
                        num/=10;
                    }
                    printf("Sum of digits is %d\n",sum);
                }
                goto repeat;
            case 3:
                float l,b,h;
                printf("Enter length, breadth and height of a cuboid : ");
                scanf("%f %f %f",&l,&b,&h);
                printf("Volume = %f\n",l*b*h);
                goto repeat;
            case 4:
                int n, count =0;
                printf("Enter a natural number : ");
                scanf("%d",&n);
                for(int k=2;k<n/2;k++){
                    if (n%k==0){
                        count++;
                    }
                }
                if (count>1){
                    printf("Composite number\n");
                }
                else{
                    printf("Prime number\n");
                }
                goto repeat;
            case 5:
                break;
            default:
                printf("Invalid choice entered\n");
                goto repeat;
        }

    return 0;

}