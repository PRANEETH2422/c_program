#include <stdio.h>
int main(){
    int principal,rate,years,simpleinterest;
    printf("enter the principal:");
    scanf("%d",&principal);

    printf("enter the rate: ");
    scanf("%d",&rate);

    printf("enter the years: ");
    scanf("%d",&years);

    simpleinterest = (principal*rate*years)/100;

    printf("the simple interest is = %.2d\n",simpleinterest);
    
    return 0;
}