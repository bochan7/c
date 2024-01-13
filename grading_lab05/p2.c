//write a c program to swap two element using pointer//
#include<stdio.h>
void main(){
 int a,b,t;
 int *i;
 int *j;
 printf("enter the value of a and b:\n");
 scanf("%d %d",&a,&b);

 printf("before swapping\na=%d\nb=%d\n",a,b);
 //stroing value of address in i and j//
 i = &a;
 j = &b;
 //swapping value using pointer
 t=*i;
 *i=*j;
 *j=t;
printf("after swapping\na=%d\nb=%d",a,b);

}