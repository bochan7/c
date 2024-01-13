
//linear search
#include<stdio.h>
void main(){
int n,x,u,count=0;
printf("enter the size of array:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter elements in array:\n");
    scanf("%d",&arr[i]);
}
printf("enter search element:\n");
scanf("%d",&x);
for( u=0;u<n;u++){
    if(arr[u] == x){
        printf("element found:\n");
        break;
    }
if( u == x){
    printf("element not found");
}
}



}