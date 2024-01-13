/*ramesh basic salary is input through the keyboard,his dearness allowance
is 40%of the basic salary ,and house rent 
allowance is 20%of the basic salary write a program to calculate his gross salary */

#include<stdio.h>

int main()
{
  float bp,da,hra,grpay;
  printf("\nEnter the basic salary of ramesh:");
  scanf("%f",&bp);
  da=0.4*bp;
  hra=0.2*bp;
  grpay=da+hra+bp;
  printf("basic salary of ramesh =%f\n",bp);
  printf("dearence allowance =%f\n",da);
  printf("house rent allowance=%f\n,hra");
  printf("gross pay of ramesh is;%f\n",grpay);
  return 0;
  

}