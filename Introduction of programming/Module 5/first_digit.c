#include<stdio.h>

int main(){

    int a, first_digit;
    scanf("%d " , &a);

    first_digit = a / 1000;

    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }else{
        printf("ODD");
    }
    

    
    return 0;
}
