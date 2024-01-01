#include <stdio.h>

void first_n_natural(int);
void first_n_natural_rev(int);
void first_n_odd(int);
void first_n_odd_rev(int);
void first_n_even(int);
void first_n_even_rev(int);
void first_n_squares(int);
void binary(int);
void octal(int);
void num_rev(int);

int main(){
    //first_n_natural(10);
    //first_n_natural_rev(10);
    //first_n_odd(10);
    //first_n_odd_rev(10);
    //first_n_even(10);
    //first_n_even_rev(10);
    //first_n_squares(10);
    //binary(36);
    //octal(8);
    //num_rev(143265);
}

void first_n_natural(int n){
    if(n!=1)
        first_n_natural(n-1);
    printf("%d ",n);
    
}

void first_n_natural_rev(int n){
    printf("%d ",n);
    if (n!=1)
        first_n_natural_rev(n-1);
    
}

void first_n_odd(int n){
    if(n!=1)
        first_n_odd(n-1);
    printf("%d ",2*n-1);
    
}

void first_n_odd_rev(int n){
    printf("%d ",2*n-1);
    if (n!=1)
        first_n_odd_rev(n-1);
    
}

void first_n_even(int n){
    if(n!=1)
        first_n_even(n-1);
    printf("%d ",2*n);
    
}

void first_n_even_rev(int n){
    printf("%d ",2*n);
    if (n!=1)
        first_n_even_rev(n-1);
    
}

void first_n_squares(int n){
    if(n!=1)
        first_n_squares(n-1);
    printf("%d ",n*n);
    
}

void binary(int n){
    if (n/2!=0){
        binary(n/2);
    }
    printf("%d",n%2);
}

void octal(int n){
    if (n>7){
        octal(n/8);
    }
    printf("%d",n%8);
}

void num_rev(int n){

    printf("%d",n%10);

    if (n/10!=0){
        num_rev(n/10);
    }
}
