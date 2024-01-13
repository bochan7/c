#include<stdio.h>
int main(){
int i=1,n,h;
printf("enter the number whose multiplication table you wanna see:\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
 {h=n*i;
 
 printf("%d*%d=%d\n",n,i,h);
 
}

 return 0;
}