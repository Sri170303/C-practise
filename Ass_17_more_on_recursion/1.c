#include <stdio.h>

int sum_n(int);
int sum_n_odd(int);
int sum_n_even(int);
int sum_squares_n(int);
int sum_digits(int);
int fact(int);
int hcf(int,int);
int hcf_cal(int,int);
int max(int, int);
void fibonacci_n_terms(int);
int nth_fibonacci(int);
int digit_count(int);
int power(int,int);

int main(){
    //printf("%d",sum_n(10));
    //printf("%d",sum_n_odd(10));
    //printf("%d",sum_n_even(10));
    //printf("%d",sum_squares_n(5));
    //printf("%d",sum_digits(0));
    //printf("%d",fact(5));
    //printf("%d",hcf(96,112));
    //fibonacci_n_terms(10);    
    //printf("%d",digit_count(12345));
    //printf("%d",power(5,5));
}

int sum_n(int n){
    if (n!=0){
        return n + sum_n(n-1);
    }
    else{
        return 0;
    }
}


int sum_n_odd(int n){
    if (n!=0){
        return 2*n-1 + sum_n_odd(n-1);
    }
    else
        return 0;
}

int sum_n_even(int n){
    if (n!=0){
        return 2*n + sum_n_even(n-1);
    }
    else
        return 0;
}

int sum_squares_n(int n){
    if (n!=0){
        return n*n + sum_squares_n(n-1);
    }
    else 
        return 0;
}

int sum_digits(int n){
    if (n!=0){
        return n%10 + sum_digits(n/10);
    }
    else 
        return 0;
}

int fact(int n){
    if (n!=0){
        return n* fact(n-1);
    }
    else
        return 1;
}

int hcf(int a,int b){
    if (max(a,b)==b){
        hcf_cal(a,b);
    }
    else{
        hcf_cal(b,a);
    }    
}

int max(int a, int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}
int hcf_cal(int a, int b){

    if (b%a==0){
        return a;
    }
    else
    {
        hcf(b%a,a);
    }
}

void fibonacci_n_terms(int n){
    if(n==1){
        printf("%d ",nth_fibonacci(n-1));
        return;
    }
    else{
        fibonacci_n_terms(n-1);
    }
    printf("%d ",nth_fibonacci(n-1));
    
}

int nth_fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return nth_fibonacci(n-1) + nth_fibonacci(n-2);
    }
}


int digit_count(int n){
    if (n!=0){
        return 1 + digit_count(n/10);
    }
    else{
        return 0;
    }
}

int power(int a, int n){
    if (n!=0){
        return a*power(a,n-1);
    }
    return 1;
}