//execution of a loop unknown numbers of time//
#include<stdio.h>
int main(){
 char another;
 int num;
 do{
  printf("enter a number:");
  scanf("%d",&num);
  printf("square of %d is %d\n",num,num*num);
  printf("want to enter another number ?? y/n");
  fflush(stdin);
  scanf("%c",&another);
  }while(another=='y');
  return 0;

}