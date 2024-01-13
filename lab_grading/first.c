/*demonstrating the
use of various operators in c*/
/*first demonstrating the use of
 relational operator*/
#include<stdio.h>
int main()
{
  int num1,num2;
  printf("enter the first number:");
  scanf("%d",&num1);
  printf("enter the 2nd number:");
  scanf("%d",&num2);
  /*demonstration of relational operator*/

printf("\nrelational operatars demonstration:\n");
printf("%d==%d is %d\n",num1,num2,num1==num2);
printf("%d!=%d is %d\n",num1,num2,num1!=num2);
printf("%d<%d is %d\n",num1,num2,num1<num2);
printf("%d<=%d is %d\n",num1,num2,num1<=num2);
printf("%d>%d is %d\n",num1,num2,num1>num2);
printf("%d>=%d is %d\n",num1,num2,num1>=num2);
return 0;
}