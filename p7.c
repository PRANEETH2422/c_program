//returning the remainder when two numbers are divided
#include <stdio.h>
int main(){
    int dividend,divisor,remainder;
    printf("enter the dividend:");
    scanf("%d",&dividend);

    printf("enter the divisor:");
    scanf("%d",&divisor);

    remainder = dividend % divisor;
    printf("the remainder is!! = %d\n",remainder);

    return 0;
}