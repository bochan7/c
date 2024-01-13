/*using more complex desicion making */
/*evalvauting a grades of a student using two different approach*/
/*by using if else statement*/
/*the marks obtained in five different subjects are input through keyboard
the students gets a divison based on the percentage
percentage above or equal to 60--first division*/
/*percentage between 50 and 59--second division
per between 40-49 third division n below that is fail*/
#include<stdio.h>
int main()
{
 int m1,m2,m3,m4,m5,per;
 printf("enter the marks in subject 1:\n",m1);
 scanf("%d",&m1);
 printf("enter the marks in subject 2:\n",m2);
 scanf("%d",&m2);
 printf("enter the marks in subject 3:\n",m3);
 scanf("%d",&m3);
 printf("enter the marks in subject 4:\n",m4);
 scanf("%d",&m4);
 printf("enter the marks in subject 5:\n",m5);
 scanf("%d",&m5);

 per = (m1+m2+m3+m4+m5)*100/500;
 if(per>=60)
    printf("congratulations you have passed from first division");
 else
 {
   if(per>=50)
      printf("second division\n");
   else 
      printf("failed!!");
    
 }




}