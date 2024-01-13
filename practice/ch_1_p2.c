/*the distance between two cities(in km) is input through the keyboard. write a 
program to convert this distacnce and print it into meter ,feet, inches,centimeter*/

#include<stdio.h>
int main()
{
 float km ,m,cm,ft,inch;
 printf("enter the distance in km");
 scanf("%f",&km);
 m=km*1000;
 cm=m*100;
 inch=cm/2.54;
 ft=inch/12;
 printf("distance in meter =%f\n",m);
 printf("the distance in cm=%f\n",cm);
 printf("the distance in inch=%f\n",inch);
 printf("the distacne in ft=%f\n",ft);
 return 0;

}