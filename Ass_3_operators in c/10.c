// WAP to swap values of two int variables in single line arithmetic expression

int main(){
    int a,b,temp;
    a=14,b=45;
    printf("Before swapping a=%d and b=%d",a,b);
    //temp=a;
    a=a+b-(b=a);
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;

}