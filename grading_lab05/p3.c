//Write a C program to calculate the sum of two numbers using a pointer.//
#include<stdio.h>
int main(){
    int a,b,sum;
    int *i,*j;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    i=&a;
    j=&b;
    sum=*i+*j;
    printf("the sum of the entered number %d and %d is %d",a,b,sum);
return 0;
}