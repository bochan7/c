#include <stdio.h>
int main() {
    int num, reversedNum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
