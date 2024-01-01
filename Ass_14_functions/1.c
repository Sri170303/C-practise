#include <stdio.h>

float area_of_circle(float);
float simple_interest(float,float,float);
int even_or_odd(int);
void first_n_num(int);
void first_n_odd(int);
int fact(int);
int n_c_r(int,int);
int n_p_r(int,int);
int digit_checker(int, int);
void prime_factors(int);

int main(){
    //printf("Area of circle with radius %f is %f",3.14,area_of_circle(3.14));
    //printf("%f",simple_interest(1,1,1));
    //printf("%d",even_or_odd(34));
    //first_n_num(7);
    //first_n_odd(7);
    //printf("%d",fact(5));
    //printf("%d",n_c_r(20,20));
    //printf("%d",n_p_r(5,4));
    //printf("Is %d in %d : %d",3,18762,digit_checker(18762,3));
    //prime_factors(99);
    return 0;
}
    
float area_of_circle(float r){
    float area=3.14*r*r;
    return area;
}

float simple_interest(float p,float r,float t){
    float si =(p*r*t)/100;
    return si;
}

int even_or_odd(int n){
    if (n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

void first_n_num(int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d ",i);
    }
}

void first_n_odd(int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d ",2*i-1);
    }
}

int fact(int n){
    if (n==0)
        return 1;
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

int n_p_r(int n,int r){

    int no_of_permutations=fact(n)/fact(n-r);
    return no_of_permutations;
}

int digit_checker(int num, int n){
    while (num){
        if (num%10==n){
            return 1;
        }
        else{
            num/=10;
        }
    }
    return 0;
}

void prime_factors(int n){
    int k=2;
    int end=n/2;

    while(end){
        if(n%k==0){
            printf("%d ",k);
            n/=k;
        }
        else{
            k++;
            end--;
        }
    }
}