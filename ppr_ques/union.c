//finding union of two pre sorted arrays
#include<stdio.h>
void printUnion(int arr1[],int arr2[],int m,int n);
void printUnion(int arr1[],int arr2[],int m,int n){
    int i = 0,j=0;
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
         printf("%d",arr1[i]);
         i++;
        }
        else if(arr1[i] > arr2[j]){
            printf("%d",arr2[j]);
            j++;
        }
        else {
            printf("%d",arr2[j]);
            i++;
            j++;
        }
    }
    while(i < m){
        printf("%d",arr1[i]);
        i++;
    }
