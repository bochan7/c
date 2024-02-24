//binary search
#include<stdio.h>
int main(){
int z;
 printf("enter the size of the array:\n");
 scanf("%d",&z);
 int arr[z];
 int n;
 printf("enter the number of element to insert in the array:\n");
 scanf("%d",&n);

 if(n < z){
 for(int i = 0;i<n;i++){
    printf("enter the elements in sorted manner:\n");
    scanf("%d",&arr[i]);
 }
 int x;
 printf("enter the search element:\n");
 scanf("%d",&x);
 int count = 0;
int low = 0;
int high = n;
do {
int mid = (low + high)/2;

if(arr[mid] == x){
    count ++;
    break;
}
else if(arr[mid] > x ){
    high = mid -1 ;
}
else{
    low = mid+1;
}

}

while(low < high);


if(count == 0){
    printf("not found:\n");
}
else{
    printf("found:\n");
}
 }

else{
    printf("element exceeds the size:\n");
}
}