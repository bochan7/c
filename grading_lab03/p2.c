//devlop a program to calculate average of n array elements in c//
#include<stdio.h>
int main()
{
int average, sum=0,n,a[100];
 average;
printf("enter the size of 1d array:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
 { printf("enter the values:\n ");
   scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
 sum=sum+a[i];
}
average=sum/n;
printf("the average of elements is:%d\n",average);


return 0;
}