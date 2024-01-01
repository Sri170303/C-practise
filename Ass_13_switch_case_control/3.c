#include <stdio.h>
int main(){
    int n;
    repeat:
        printf("Enter the day number : ");
        scanf("%d",&n);

        switch (n)
        {
            case 1:
                printf("Have a wonderful Monday ahead!");
                break;
            case 2:
                printf("Have a wonderful Tuesday ahead!");
                break;
            case 3:
                printf("Have a wonderful Wednesday ahead!");
                break;
            case 4:
                printf("Have a wonderful Thursday ahead!");
                break;
            case 5:
                printf("Have a wonderful Friday ahead!");
                break;
            case 6:
                printf("Have a wonderful Saturday ahead!");
                break;
            case 7:
                printf("Have a wonderful Sunday ahead!");
                break;
        
            default:
                printf("Invalid day number entered.\n");
                goto repeat;
        }
    return 0;
}