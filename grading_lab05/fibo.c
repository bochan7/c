#include <stdio.h>


void fibonacciseries(int n) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d\t", firstTerm);
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("enter the number of terms for Fibonacci series\n");
    scanf("%d",&n);
    
     fibonacciseries(n);
        return 0;
}
