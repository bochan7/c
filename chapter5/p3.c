//two numbers are entered through keyboard write a program to //
//find the value of one number raised to the power of another//
#include<stdio.h>
int main(){
int a,b,r=1;
long int power =1;
printf("enter the first number:\n");
scanf("%d",&a);
printf("enter the second number:\n");
scanf("%d",&b);
while(r<=b)
{
 power=power*a;
 r++;
}
printf("%d power to the %d = %ld\n",a,b,power);
return 0;

}