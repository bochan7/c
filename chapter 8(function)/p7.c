//bubble sorting//
//arranging in ascending order
#include<stdio.h>
int main(){
    int n;
    printf("how many number you want to enter??");
    scanf("%d",&n);
    int arr[n];

printf("array b4 sorting:\n");
for(int i=0;i<n;i++){
    printf("%d",&arr[i]);
}
    //sorting is done of n-1 elements 
    //two loops are used
    for(int i=0;i<n-1;i++){
        for(int j;j<n-1-i;j++){
            if(arr[j]>arr[i]){ //swapping them if 2nd element is greater than the first one//
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
printf("array after sorting:\n");
for(int i=0;i<n;i++){
    printf("%d",&arr[i]);
}


}


