//to find the largest element in a an array//
#include<stdio.h>
int main(){
int largest, a[100],n;
printf("enter the size of an array:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{ printf("enter the elements:\n");
 scanf("%d",&a[i]);
}
largest=a[0];

for(int i=1;i<n;i++)
 {if (largest<a[i])
 {largest=a[i];

}}
printf("the largest number is:%d",largest);
return 0;
}