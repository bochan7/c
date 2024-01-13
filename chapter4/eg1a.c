/*doing the same eg1.c but using this tym conditional operator*/
#include<stdio.h>
int main()
{ int m1,m2,m3,m4,m5,per;
  printf("enter the marks of five subjects:\n");
  scanf("%d %d %d %d %d ",&m1,&m2,&m3,&m4,&m5);
  per=(m1+m2+m3+m4+m5)*100/500;
  if(per>=60)
    printf("passed from first division");

  if((per>=50)&&(per<=59))
    printf("second divsion");

  if((per>=40)&&(per<50))
    printf("third division");

  if(per<40)
    printf("fail\n");

 return 0;

}