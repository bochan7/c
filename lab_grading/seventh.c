#include <stdio.h>
int main() {
    double income, tax;
    /* Input from the user*/
    printf("Enter your income: ");
    scanf("%lf", &income);
    /* Calculate tax based on income*/
    if (income <= 150000) {
        tax = 0;  /* No tax*/
    } else if (income > 150000 && income <= 300000) {
        tax = 0.10 * (income - 150000);  
    } else if (income > 300000 && income <= 500000) { tax = 15000 + 0.20 * (income - 300000);  
    } else {
        tax = 55000 + 0.30 * (income - 500000); 
    }
    printf("Tax to be paid: %.2lf\n", tax);
    return 0;
}
