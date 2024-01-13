/*temperature of a city 
farenheit degress is 
input through the 
keyword.write a program to 
convert this temprature into 
centigrade degress  */

#include<stdio.h>
int main()
{
  float fr,cent;

  printf("enter the temprature in your city:");
  scanf("%f",&fr);
  cent=5.0/9.0*( fr-32 );
  printf("temprature in centigrade=%f\n",cent);
  
  return 0;

}