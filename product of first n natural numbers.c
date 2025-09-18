#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The product of the first %d natural numbers is: %llu\n", n, product);

    return 0;
}
