//write a program to read an array of n numbers and then find the smallest number
#include<stdio.h>
void read_array(int arr[],int n);
int find_small(int arr[],int n);
int main(){
    int num[10],n,smallest;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    read_array(num,n);
    smallest = find_small(num,n);
    printf("the smallest number of the array is = %d",smallest);
    return 0;
}
void read_array(int arr[10],int n){
 for(int i=0;i<n;i++){
    printf("enter the elements:\n");
    scanf("%d",&arr[i]);
 }
}
int find_small(int arr[10],int n){
    int small = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}
