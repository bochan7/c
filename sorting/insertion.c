#include<stdio.h>
#define max 10
int arr[max];
void insertion_sort(int arr[],int n);
void main(){
    int n;
    printf("enter the number of element to insert:\n ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the element:\n");
        scanf("%d",&arr[i]);
    }
    printf("\narray b4 sorting:\n");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }

     insert_sort(arr,n);
    
     printf("\narray after sorting:\n");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }

}

void insert_sort(int arr[],int n){
int i,j,temp;

for(int i=1;i<n;i++){
temp = arr[i];
j=i-1;

while(temp < arr[j] && j>=0){
 
arr[j+1] = arr[j];
j--;

}
arr[j+1] = temp;

}

}