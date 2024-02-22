//2nd program for linear search
#include<stdio.h>
int linear_search(int z,int arr[],int x );
int linear_search(int z,int arr[], int x ){

    for(int i = 0 ;i<z;i++){
        if(arr[i] == x){
            return i;
            
       }

return -1;
    }
}

void main(){
int n;
printf("declare the size of the array:\n");
scanf("%d",&n);
int arr[n];
printf("how many elements you wanna enter??\n");
int z;
scanf("%d",&z);
if(z > n){
    printf("!! number of elements exceeds the size of the array:!! ");
}
else{
    //taking the elements from the user

    for(int i = 0;i < z;i++){
        printf("enter the arr[%d] element",i+1);
        scanf("%d",&arr[i]);
    }
    //displaying the array

    printf("\nentered array is\n");
    for(int i = 0;i<z;i++){
    printf("arr[%d] = %d\n",i+1,arr[i]);
    } 
    int x;
    printf("enter the element to search in the entered array:\n");
    scanf("%d",&x);
    int result;
    result = linear_search(z,arr,x);
    if(result == -1){
        printf(" found at %d:",result);
    }
    else{
        printf("not found ");
    }
}

}