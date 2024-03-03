//program for intersection of two sorted arrays
#include<stdio.h>
void intersection(int arr1[],int arr2[],int m,int n);
int main(){
    int arr1[]={1,5,8};
    int arr2[]={1,2,3,6,8};
    int m,n;
    m = sizeof(arr1)/sizeof(arr1[0]);
    n = sizeof(arr2)/sizeof(arr2[0]);
    printf("Intersection of the given array:\n");
    intersection( arr1, arr2,m,n);
    return 0;
}

void intersection(int arr1[],int arr2[],int m,int n){
    int i = 0,j=0;
    while(i < m && j < n){
        if(arr1[i] > arr2[j]){
            i++;
        }
        else if (arr1[i] < arr2[j]){
            j++;
        }
        else{
            printf("%d ",arr1[i]);
            i++;
            j++;
        }
    }
}