#include <stdio.h>
int main() {
    int num, i;
    int is Prime = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    /*to check for prime or composite*/
    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break; }}}
         if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is a composite number.\n", num);}
    return 0;}
