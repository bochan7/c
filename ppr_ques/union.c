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
            printf("%d",arr1[i]);
            i++;
            j++;
        }
    }
    while(i < m){
        printf("%d",arr1[i]);
        i++;
    }
    while(j<n){
        printf("%d",arr2[j]);
        j++;
    }
}

int main(){
    int arr1[] = {1,2,3,3,4,4,4,5,6,7,7};
    int arr2[] = {3,3,4,5,6,7,7,7,8,8,9};
    int m,n;
    m = sizeof(arr1)/sizeof(arr1[0]);
    n = sizeof(arr2)/sizeof(arr2[0]);
    printf("the union of the follwing array:\n");
    printUnion(arr1,arr2,m,n);
return 0;
}
