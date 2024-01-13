/*program to find if the entered number is odd or even */
#include<stdio.h>
int main()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 
 if(n%2==0)
  printf("entered number is even:");
 else
 printf("the enterd number is odd");
 return 0;

}