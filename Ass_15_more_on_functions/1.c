#include <stdio.h>

int lcm(int, int);
int hcf(int,int);
int prime_check(int);
int next_prime(int);
void first_n_primes(int n);
void primes_between(int,int);
void first_n_fibonacci(int);
int fact(int);
int n_c_r(int,int);
void pascals_triangle(int);
int armstrong_check(int);
void armstrong_numbers(int, int);

int series_sum(int);


int main(){
    //printf("%d",lcm(55,11));
    //printf("%d",hcf(15,11));
    //printf("Is %d prime ? %d",11,prime_check(11));
    //printf("Next prime to %d is %d",100,next_prime(100));
    //first_n_primes(10);
    //primes_between(100,1000);
    //first_n_fibonacci(10);
    //pascals_triangle(10);
    //armstrong_numbers(2,1000);
    //printf("%d",series_sum(3));
    return 0;
}

int lcm(int a,int b){
    if (a>=b){
        for(int k=a;k<=a*b;k++){
            if (k%a==0 && k%b==0){
                return k;
            }
        }
    }
    else{
        for(int i=b;i<=a*b;i++){
            if (i%a==0 && i%b==0){
                return i;
            }
        }
    }
}


int hcf(int a, int b){
    int test;
    if (a>=b){
        for (int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                test=i;
            }
        }
    }
    else{
        for (int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                test=i;
            }
        }

    }
    return test;    
}
    

int prime_check(int n){
    int count=0;
    if (n==1)
    {
        return 0;
    }

    for (int i=1;i<=n/2;i++) 
    {
        if(n%i==0){
            count++;
        }
    }
    if (count>1){
        return 0;
    }
    else{
        return 1;
    }
}

int next_prime(int n){
    int k;
    for(k=n+1;;k++){
        if (prime_check(k)==1){
            return k;
        }
    }

}

void first_n_primes(int n){
    int k=0;
    
    for(int i=2;;i++){
        if (k==n)
            break;
        if(prime_check(i)==1){
            printf("%d ",i);
            k++;
        }
    }
    
}

void primes_between(int a,int b){
    
    
    for(int i=a+1;i<b;i++){
        if(prime_check(i)==1){
            printf("%d ",i);
            i++;
        }
    }
    
}

void first_n_fibonacci(int n){
    int a=0,b=1;
    if (n==1){
        printf("%d ",a);
    }
    else if (n==2){
        printf("%d %d",a,b);
    }
    else{
        printf("%d %d ",a,b);
        for (int k=1;k<=n-2;k++){
        int temp = a;
        a=b;
        b=b+temp;
        printf("%d ",b);
        }
    }

}


int fact(int n){

    int factorial=1;
    for (int i=2;i<=n;i++){
        factorial=factorial*i;
    } 
    return factorial;
}

int n_c_r(int n,int r){

    int no_of_combinations=fact(n)/(fact(r)*fact(n-r));
    return no_of_combinations;
}

void pascals_triangle(int n){
    for(int i=0;i<=n;i++){
        for(int k=0;k<=i;k++){
            printf("%d  ",n_c_r(i,k));
        }
        printf("\n");
    }
}

int armstrong_check(int n){

    int n_copy = n, count=0;
    while (n){
        count++;
        n/=10;
    }

    
    int digit_pow_sum = 0, n_copy2 = n_copy;
    
    for (int k=1;k<=count ;k++){
        int test_case = 1;
        for (int i=1;i<=count;i++){
            test_case = test_case * (n_copy%10);
        }
        digit_pow_sum = digit_pow_sum + test_case ;
        n_copy /=10;
    }

    if (n_copy2 == digit_pow_sum){
        return 1;
    }
    else{
        return 0;
    }

}


void armstrong_numbers(int a, int b){
    for(int i=a+1;i<b;i++){
        if(armstrong_check(i)==1){
            printf("%d  ",i);
        }
    }
}


int series_sum(int n){
    int sum = 0;
    for(int k=1;k<=n;k++){
        sum = sum + fact(k)/k;
    }

    return sum;
}