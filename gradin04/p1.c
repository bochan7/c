//objevtive 1
//define a structure data type called time_struct containing three members integer hours,minutes and seconds.//
//devlop a program that assigns values to individual members and displays the time in HH:MM:SS fomrat
#include<stdio.h>
struct time_struct{
    int hours,miutes,seconds;
};
void main(){
    struct time_struct time1;
    printf("enter the hour:\n");
    scanf("%d",&time1.hours);
    printf("enter the minutes:\n");
    scanf("%d",&time1.miutes);
    printf("enter the seconds:\n");
    scanf("%d",&time1.seconds);
    //displaying time//
    printf("entered time is\n %d:%d:%d ",time1.hours,time1.miutes,time1.seconds);

}