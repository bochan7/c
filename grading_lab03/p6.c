//devlop a program to count odd and even elements of an array//
#include<stdio.h>
int main(){
int even,odd, n,arr[100];
printf("enter the size of an array: ");
scanf("%d",&n);
for(int i = 0;i<n;i++)
{
    printf("enter the elements\n");
    scanf("%d",&arr[i]);
}
even=0;
odd=0;
for(int i=0;i<n;i++)
{
 if(arr[i]%2==0)
  {
    even++;
  }
 else
 {
    odd++;
 }

}
printf("total even elements are : %d\n", even);
printf("total odd elements are : %d\n", odd);
return 0;

}