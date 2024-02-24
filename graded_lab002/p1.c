/*Question 1---
Write a C program to implement linear search and binary search on an array.
(Note: Please take a pre-sorted array as input). */
#include<stdio.h>
int main(){
    int count = 0;
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
 for(int i = 0;i<n;i++){
    if(arr[i] == x){
        count ++;
        break;
    }
 }

 if(count == 0){
    printf("element not found:\n");

 }
 else{
    printf("found");
 }

}
else{
    printf("number of element exceeds array size:\n");
}
}