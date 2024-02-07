//write a program to find the mean of n numbers using arrays 
#include<stdio.h>
int main(){
int n,sum = 0,mean;
printf("enter the size of the array:\n");
scanf("%d",&n);
int arr[n];
for(int i= 0 ;i<n;i++){
    printf("enter the elements:\n");
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    sum = sum + arr[i];
}
mean = sum/n;
printf("\n mean is %d",mean);


}