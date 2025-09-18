#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;


    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the Time (in years): ");
    scanf("%f", &time);


    simpleInterest = (principal * rate * time) / 100;


    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
