// WAP to take a three digit number from the user and rotate its digits by one position towards the right

int main(){
    int a,digits_sum;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    a=(a%10)*100 + (a=a/10);
    printf("The number after rotating its digit to the right by 1 digit is %d",a);
    return 0;
    
}