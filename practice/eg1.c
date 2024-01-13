/*calculation of simple interest with pre feeded values */

#include<stdio.h>
int main()
{
  int p,n;
  float r,si;
  p=1000;
  n=3;
  r=12.9;
  si=p*r*n/100;
  printf("the simple intere wld be %f/n",si);
  return 0;

}

/*printf() can also evaluate expressions inside it*/
#include<stdio.h>
int main()
{
 int a,b;
 a=12;
 b=133;
 printf("%d,%d,%d,%d,%f",a+b,89+21,213*3121,19-190,12/19999);
 return 0;
 }