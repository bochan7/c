//finding the smallest number from an array and printing its position 
#include<stdio.h>
int main(){
int n ;
printf("enter the size of array:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter the elements:\n");
    scanf("%d",&arr[i]);
}
int small =arr[0];
int pos =0;
for(int i=0;i<n;i++){

    if(arr[i]<small){
        small = arr[i];
        pos = i;
    }
}
printf("smallest number is %d and located at %d",small,pos+1);
return 0;

}