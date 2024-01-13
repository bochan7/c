#include <stdio.h>
int main() {
    int age;
    int votingAge = 18;
    /*Input the person's age*/
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= votingAge) {
        printf("You are eligible to vote!\n");
    } else {
        printf("you are not eligible to vote.\n");
    } return 0;
    }

