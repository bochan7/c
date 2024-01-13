#include<stdio.h>
//wap to find largest from two entered number using function//
int  max(int x,int y);
int max(int x,int y){
  if(x>y){
    printf("%d is greater than %d",x,y);
  }
  else
  {
    printf("%d is greater then %d",y,x);
  }

}
void main(){
    int a,b;
    int xyz;
    printf("enter the vlue of a and b ");
    scanf("%d %d",&a,&b);
    xyz=max(a,b);
  printf("%d",xyz);

}