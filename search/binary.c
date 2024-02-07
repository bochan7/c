#include<stdio.h>
int binary_search(int arr[],int x, int low, int high);
int binary_search(int arr[],int x,int low,int high){
    int mid = low + (high-low)/2;
    while(low <= mid){
    if(arr[mid] == x ){
     return mid;
   }
    if (arr[mid] < x ){
    low = mid +1;
   }
   else {
    high = mid-1;
   }
    }
   return -1;

}
int main(){
int n,x,result;
printf("enter the size of an array:\n");
scanf("%d",&n);
int arr[n];
//enter the elements
for(int i=0;i<n;i++){
    printf("enter the elements:\n");
    scanf("%d",&arr[i]);
}
//showcasing array b4 sorting 
printf("array b4 sorting\n");
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
//sorting in ascending order
printf("\narray after sorting:\n");
int t;
for(int i=0;i<n;i++){
for(t=i+1;t<n;t++)
if(arr[i]>arr[t]){
   x=arr[i];
   arr[i]=arr[t];
   arr[t]=x;
}
}
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("enter the number u wanna search:\n");
scanf("%d",&x);
//finding an element using binary search
result = binary_search(arr,x,0,n-1);
if(result == -1){
    printf("lmao not found ");
}
else{
    printf("found at",result);
}
return 0;
}

