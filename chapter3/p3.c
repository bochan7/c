/*to determine if the entered year is leap year or not*/
#include<stdio.h>
int main()
{
 int year;
 printf("enter the year:",year);
 scanf("%d",&year);
 if(year%4==0)
 printf("the entered year is a leap year");
 if(year%400==0)
 printf("the entered year is a leap year ");
 else
 printf("the year is a normal year");
 return 0;

}