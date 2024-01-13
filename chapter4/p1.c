/*checking whether the entred year is a leap year or not using condtional operator*/
#include<stdio.h>
int main(){
 int y;
 printf("enter the year");
 scanf("%d",&y);
 if(y%4==0 || y/400==0)
  printf("entered year is leap year\n");
 else
  printf("entered year is not a leap year\n");
return 0;

}