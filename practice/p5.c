/*writing program to print highest number from the given three number input from the user */
#include<stdio.h>
int main(){
 int a,b,c;
 printf("enter the number:\n");
 scanf("%d",&a);
 printf("enter the second number:\n");
 scanf("%d",&b);
 printf("enter the third number:\n");
 scanf("%d",&c);
 if(a>b)
 {
   if(a>c)
   printf("a is the greatest number:\n");
   else
   printf("c is greatest");
   
}
else if (b>c)
{  if(b>a)
  printf("b is the greatest");
  else
  printf("a is the greatest");
}

else
printf("c is the greatest:");

return 0;
}








