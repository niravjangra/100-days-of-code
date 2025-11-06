// ques 9
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Input
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculations
    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Output
    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f\n", compound_interest);

    return 0;
}
  

