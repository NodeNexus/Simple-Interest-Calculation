#include <stdio.h>
int main() {
    float principal, years, rate, si;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the number of years: ");
    scanf("%f", &years);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    si = (principal * years * rate) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}
