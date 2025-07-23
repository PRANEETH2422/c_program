//swap two variables
#include <stdio.h>
int main(){
    int a = 7,b = 11, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n",a,b);

    return 0;
}