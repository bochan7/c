//wrting a program to find the second largest number 
#include<stdio.h>
int main(){
int n;
printf("enter the size of array:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter the elements:\n");
    scanf("%d",&arr[i]);
}
//arranging the array in ascending order
int t;
for(int i = 0; i < n; i++){
    for(int j = i+1; j < n ; j++){
        
        if(arr[i] > arr[j]){
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        }
    }
    }

printf("arry in ascending order:\n");
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("second largest element is %d and present at %d position",arr[n-2],n-1);
return 0;
}










