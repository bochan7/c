//write a program to find the average marks obtained by a class of 30 students in a test//
#include<stdio.h>
int main(){
int avg,sum=0;
int i;
int marks[30];
for(i=0;i<=29;i++)
 {
   printf("enter the marks\n");
   scanf("%d",&marks[i]);

 }
for(i=0;i<=29;i++)
{
    sum=sum+marks[i];

}
avg=sum/30;
printf("the averag of class is:%d",&sum);
return 0;

}