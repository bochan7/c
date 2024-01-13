#include<stdio.h>
int main()
{ int num=25;
  printf("original value of number:%d\n",num);
  /*shorthand assignment operator */
  num +=7;/*equivalent to num =num+5*/
  printf("after num +=7: %d\n",num);
  num -=2;/*equivalent to num=num-3*/
  printf("after num -=2: %d\n",num);
  num *=10;/*equivalent to num=num*10*/
  printf("after num *10: %d\n",num);
  num %=20;/*equivalent to num=num%20*/
  printf("after num %%=20: %d\n",num);
  num *=5;
  printf("after num *=5: %d\n",num);
  return 0;

}