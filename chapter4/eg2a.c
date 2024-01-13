/*solving the same problem using logical operator*/
#include<stdio.h>
int main(){
 char sex,ms;
 int age;
 printf("enter the age,sex,marital status");
 scanf("%d%c%c",&age,&sex,&ms);

 if((ms=='M')||( ms=='U'&& sex=='M'&& age>30)||(ms =='U'&&sex=='F'&& age >25))
   printf("insured!!\n");
 else 
  printf("sorry");
  return 0;
}