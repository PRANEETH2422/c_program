//checking whther a number is positive,negative or zero
#include <stdio.h>
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("the results are!!!!\n");
    if (num > 0){
        printf("the number is positive!!");
    }else if (num < 0){
        printf("the number is negative!!");
    }else{
        printf("the number is zero");
    }
    return 0;
}