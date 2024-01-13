/*a company insures its drivers in the following cases
--if the driver is married
---if the driver is unmarried,male & above 30 years of age 
----if the driver is unmarried,female & above 25 years of age */
#include<stdio.h>
int main(){
int age;
char sex,ms;
printf("enter the marital_status,sex,age of the applicant");
scanf("%c%c%d",&ms,&sex,&age);
if(ms=='M')
 printf("the applicant can be provided insurance");
if (ms='UM')
{
  {if((sex=='male')&&(age>30))
  printf("insurance can be issued");
  else
  printf("insurance can't be issued");
  }
  if((sex=='female')&&(age>25))
    printf("go back to kitchen");
  else
  printf("sorry insurance can be issued");
} 
  

else
printf("the applicant can't be be insured");
 
return 0;

}







