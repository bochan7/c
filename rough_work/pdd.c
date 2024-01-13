#include<stdio.h>
//pallindrome 121 //100xx//
int main(){
   int n,x;
   printf("enter the value:\n");
   scanf("%d",&x);
   n=x;
while(x>0){
 int r,sum=0;
 r=x%10;
 sum = r+(sum*10);
 x=x/10;
}

}