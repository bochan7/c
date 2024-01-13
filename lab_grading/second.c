#include <stdio.h>
int main() {
    int num1, num2;
    /*Input two numbers*/ 
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    /*Logical operators demonstration*/ 
    printf("\nLogical Operators Demonstration:\n");
    /*Logical AND (&&)*/ 
    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("At least one number is not positive.\n");
    }
    /*Logical OR (||)*/ 
    if (num1 == 0 || num2 == 0) {
                                                                                                    
printf("At least one number is zero.\n");
    } else {
        printf("Both numbers are non-zero.\n");
    }
    /* Logical NOT (!)*/
    if (!(num1 < 0)) {
        printf("The first number is not negative.\n");
    } else {
        printf("The first number is negative.\n");
    }
    return 0;
}
