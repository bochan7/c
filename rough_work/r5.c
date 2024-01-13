//displaying the square and cube root of first n natural number using do while loop//
#include<stdio.h>
int main(){
int n ,i=1;
int square,cube;
printf("enter the value of n:");
scanf("%d",&n);
printf("number\tSquare\tcub\n");
do{

 square=i*i;
 cube=i*i*i;
 printf("%d\t%d\t%d\n",i,square,cube);
 i++;
}
while(i<=n);
return 0;



}