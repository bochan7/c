#include <stdio.h>
int main() 
{
    int n;
    unsigned long long factorial = 1; /*Use unsigned long long for larger factorials*/
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        /*Calculate factorial using a for loop*/
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}
