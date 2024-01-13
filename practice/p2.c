

/*calculating simple interest by taking values of diiferent terms included from the user*/
#include<stdio.h>
int main()
{
  int p,n;
  float r,si;
  printf("enter the value of p,n,r\n"); 
  scanf("%d,%d,%f",  &p  ,    & n,    & r);
  si=p*r*n/100;
  printf("%f",  si );
  return 0;


}
