//write a c program to print value and address of the variable//
#include<stdio.h>
void main(){ 
    int a;
    printf("enter the value of the variable:\n");
    scanf("%d",&a);
    //printing the value and address and value of the variable//
    printf("the value of the variable is %d:\n",a);
    printf("the address of the variable is %u\n",&a);

}