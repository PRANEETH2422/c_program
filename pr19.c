#include <stdio.h>

int main() {
    int base, exponent, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power %d = %d\n", base, exponent, result);
    return 0;
}

