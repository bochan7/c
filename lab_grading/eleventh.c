#include <stdio.h>
int main() {
    int m, n, sum = 0;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (m <= n) {
        sum += m;
        m++;
    }
    printf("The sum of numbers from %d to %d is: %d\n", m , n, sum);
    return 0;}
