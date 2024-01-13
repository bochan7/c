//arranging elements of an array in ascending order//
#include<stdio.h>
void main(){
int n;
printf("enter the size of an array:\n");
scanf("%d",&n);
int arr[n];
int k;
for(int i=0;i<n;i++){
printf("enter elements:\n");
scanf("%d",&arr[i]);
}
//arranging in ascending order
for(int j=0;j<n;j++){
    if(arr[j]>arr[j+1]){
        arr[j]=k;
        k=arr[j+1];
        arr[j+1]=k;
        }
    else
    continue;
    }
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
}