//bubble sorting

#include<stdio.h>
void main(){
    int n;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i<n ;i++){
        printf("Enter the elements:\n");
        scanf("%d",&arr[i]);
    }

    printf("\nunsorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    //main logic for bubble sort
    int temp;
    for(int i = 0 ;i < n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
            }
        }
    }
     printf("\nsorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}