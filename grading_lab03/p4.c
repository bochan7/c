//to print sum of second and second last element of an array//
#include<stdio.h>
int main(){
int n,arr[100];
printf("enter the size of an array:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
 {printf("enter the elements:\n");
 scanf("%d",&arr[i]);}
printf("the sum of second (%d) element and second last (%d) element of an array is %d",arr[1],arr[n-1],arr[1]+arr[n-1]);
return 0;
}