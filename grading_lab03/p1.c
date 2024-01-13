//devlop a program to calculate sum of n array elements in c//
#include<stdio.h>
int main()
{
int sum=0,n,a[100];
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

printf("your sum of elements is:%d\n",sum);


return 0;
}