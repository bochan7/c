//finding the factor of a number using while loop//
#include<stdio.h>
int main(){
int i=1,n;
printf("enter the number of which u wanna find the factors:",n);
scanf("%d",&n);
while(i<=n)
{ if(n%i==0)
    printf("%d,",i);
  i=i+1;}


}





