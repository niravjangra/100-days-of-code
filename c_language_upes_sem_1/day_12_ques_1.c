#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    // Input
    printf("Enter number of days late: ");
    scanf("%d", &days);

    // Calculate fine based on late days
    if (days <= 0)
        printf("No fine. Books returned on time.\n");
    else if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = (5 * 2) + (days - 5) * 4;
    else if (days <= 30)
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
    else
        printf("Membership Cancelled due to delay over 30 days.\n");

    // Output fine if applicable
    if (days > 0 && days <= 30)
        printf("Total Fine = ₹%.2f\n", fine);

    return 0;
}
