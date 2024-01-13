#include <stdio.h>
int main() 
{
    char ch;
    /*Input  character*/
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    if (isalpha(ch)) {
        printf("%c is an alphabetic character.\n", ch);
    } else {
        printf("%c is not an alphabetic character.\n", ch);
    }
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    if (isprint(ch)) {
        printf("%c is a printable character.\n", ch);
    } else {
        printf("%c is not a printable character.\n", ch);
    }
    if (isspace(ch)) {
        printf("%c is a whitespace character.\n", ch);
    } else {
        printf("%c is not a whitespace character.\n", ch);
    }
    return 0;
}
