#include <stdio.h>
int main() {
    unsigned int num1 = 50;  /*binary: 110010*/ 
    unsigned int num2 = 15;  /*binary:1111*/
    /*Bitwise operators demonstration*/ 
    printf("num1 & num2 = %u\n", num1 & num2);  /*Bitwise AND*/ 
    printf("num1 | num2 = %u\n", num1 | num2);  /*Bitwise OR*/ 
    printf("num1 ^ num2 = %u\n", num1 ^ num2);  /*Bitwise XOR*/ 
    printf("~num1 = %u\n", ~num1);             /*Bitwise NOT*/ 
    unsigned int num3 = 8;   /*Binary: 1000*/
    /*Left and Right Shift*/ 
    printf("num3 << 2 = %u\n", num3 << 2);  /*Left shift by 2 positions*/
    printf("num3 >> 1 = %u\n", num3 >> 1);  /*Right shift by 1 position*/ 
    return 0;
}
