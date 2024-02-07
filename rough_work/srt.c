#include<stdio.h>
void main(){
    int n;
    printf("determine the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the elements:\n");
        scanf("%d",&arr[i]); 
    }
    printf("array b4 sorting:\n");
    for(int i=0;i<n;i++){
       
        printf("%d",arr[i]);
    } 

    printf("\nafter sorting:\n");
    int t;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            
            t= arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
      } 
    }
 for(int i=0;i<n;i++){
       
        printf("%d",arr[i]);
    } 



}