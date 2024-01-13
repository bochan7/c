//finding whether the entered number by user is prime or not//
#include<Stdio.h>
int main(){
int i,num;
printf("enter the number:\n",num);
scanf("%d",&num);
i=2;
while(i<=num-1)
{
    if(num%i==0)
    {
        printf("the number is not prime:\n");
        break;
    }
  i++;

}
if(i==num)
  printf("prime number");

}