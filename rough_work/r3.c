//demostration of switch case statement//
#include<stdio.h>
int main(){
int day_number;
printf("enter the day number from 1 to 7:\n");
scanf("%d",&day_number);
switch (day_number)
{
case 1:
    printf("the day is monday");
    break;
case 2:
    printf("the day is tuesday");
    break;
case 3:
    printf("the day is wednesday");
    break;
case 4:
    printf("the day is thrusday");
    break;
case 5:
    printf("the day is friday");
    break;
case 6:
    printf("the day is saturday");
    break;
case 7:
    printf("the day is sunday");
    break;

default:
    printf("**error** invalid input **error**");
    break;
}
return 0;



}