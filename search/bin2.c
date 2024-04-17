#include<stdio.h>
int main(){
int n,x,found = 0;
printf("enter the size of an array:\n");
scanf("%d", &n);
int arr[n];
//enter the elements
for(int i = 0;i < n;i++){
    printf("enter the elements:\n");
    scanf("%d", &arr[i]);
}
//showcasing array b4 sorting 
printf("array b4 sorting\n");
for(int i = 0 ;i < n;i++){
    printf("%d\t",arr[i]);
}
//sorting in ascending order
printf("\narray after sorting:\n");
int t;
for(int i = 0;i < n; i++){
for(t = i + 1;t < n; t++)
if(arr[i]>arr[t]){
   x=arr[i];
   arr[i]=arr[t];
   arr[t]=x;
}
}
for(int i = 0;i < n;i++){
    printf("%d\t", arr[i]);
}

//finding an element using binary search

int key,low;
int mid,high;
printf("\nenter the element you wanna search from the array:\n");
scanf("%d", &key);
low=0;
high=n-1;

while(low <= high){

   mid = (high+low)/2;

    if(arr[mid] > key ){
     high = mid - 1;
   }
    else if (arr[mid] < key ){
    low = mid + 1;
   }
   else if(arr[mid] == key ) {
    found = 1;
    break;
   }
}
if(found == 0){
    printf("not found:\n");
}
else{
    printf("found at %d position",mid +1);
}
return 0;
}