//write a program to count no.of +ve and -ve numbers entered by user using array//
#include<stdio.h>
int main(){
int i;
int num[10];
for(i=0;i<=9;i++);
 {
    printf("enter the number");
    scanf("%d",&num[i]);
 }
 for(i=0;i<=9;i++)
  { if(num[i]>0)
     {
        printf("number is positive");
     }
    else
     printf("the number is negative");



  }
return 0;



}