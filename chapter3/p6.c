/*#if the ages of ram shyam and ajay are 
input through the keyboard,write a 
program to determine the youngest of them*/

#include<stdio.h>
int main()
{ int r,s,a,young;
 printf("enter the ages of ram\n",r);
 scanf("%d",&r);
 printf("enter the age of shyam:\n",s);
 scanf("%d",&s);
 printf("enter the age of ajay:\n",a);
 scanf("%d",&a);

 if(r<s)
  {
   if(r<a)
      young=r;
      else
      young=a;
  }
 else
  { 
    if(s<a)
    young =s;
    else
    young=a;

   } 

printf("the younges of ram(%d),shyam(%d),ajay(%d)is%d\n",r,s,a,young);
return 0;

}








