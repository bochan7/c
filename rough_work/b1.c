//bubble sorting//
//arranging in ascending order
#include<stdio.h>
int main(){
    int n;
    printf("how many number you want to enter??");
    scanf("%d",&n);
    int arr[n];
    //taking array input//
    printf("enter elements:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("array b4 sorting:\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);}
    //sorting is done of n-1 elements 
    //two loops are used
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ //swapping them if 2nd element is greater than the first one//
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }



printf("\narray after sorting:\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}