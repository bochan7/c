/*calculation of aggregate and th epercentage scored by the studen 
where subject marks shld be entered by the user*/
#include<stdio.h>
int main()
{
 int m1,m2,m3,m4,m5,aggr;
 float percen;
 printf("\nenter the marks of five subjects:");
 scanf("%d,%d,%d,%d,%d",&m1,&m2,&m3,&m4,&m5);
 aggr=m1 + m2 + m3 + m4 + m5;
 percen=aggr/5;
 printf("the aggregate is%d",aggr);
 printf("the percentage is%f",percen);
 return 0;

}