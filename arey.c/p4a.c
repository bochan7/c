//finding the second largest number 
#include<stdio.h>
int main(){
    int n,largest,seccond_largest;
    printf("enter the size of array:\n");
    scanf("%d",&n);
int arr[n];
for(int i = 0 ; i < n ; i++){
    printf("enter the elements:\n");
    scanf("%d", &arr[i]);
}
largest = arr[0];
for(int i = 0 ; i < n ; i++ ){
if(arr[i]>largest){
    largest = arr[i];
}
}
seccond_largest = arr[1];
for(int i = 0 ; i < n; i++){
    if(arr[i] != largest){
        if(arr[i] > seccond_largest){
            seccond_largest = arr[i];
        }
    }
}
printf("the number u entered:\n");
for(int i = 0 ; i < n ; i++ ){
    printf("%d\t",arr[i]);
}
printf("the latgest number is %d",largest);
printf("the second largest number:%d located at %d\n",seccond_largest);
}