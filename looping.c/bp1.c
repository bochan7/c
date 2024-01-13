//write a program to calculate overtime pay of 10 employees.//
//overtime is paid at the rate of Rs.12.00 per hour fr every hour worked over 40hr//
#include<stdio.h>
int main(){
int hour,i=1,otpay;

while(i<=10) //for finding the overtime salary of only 10 employee//
{  printf("enter the hours worked by the employee\n");
   scanf("%d",&hour);

      if(hour>=40)
        {otpay=(hour-40)*12;
          printf("your salary is=%d\n",otpay);
        }
      else  
        {otpay==0;
        printf("your overtime salary is:%d",otpay);
        }
 i++;
}

return 0;
}