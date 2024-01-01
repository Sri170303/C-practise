#include <stdio.h>
int main(){
    int var;

    repeat:
        printf("\nEnter an integer : ");
        scanf("%d",&var);

        switch(var){
            case 1:
                printf("good");
                break;
            case 2:
                printf("better");
                break;
            case 3:
                printf("best");
                break;
            default:
                printf("invalid\n");
                goto repeat;
        }
    return 0;
}