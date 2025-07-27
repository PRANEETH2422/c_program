#include <stdio.h>

int main() {
    int i, p = 1;

    printf("Enter the value of i to find the product (factorial): ");
    scanf("%d", &i);

    if (i < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (int x = 1; x <= i; x++) {
        p *= x;
    }

    printf("The product (factorial) is %d\n", p);

    return 0;
}

