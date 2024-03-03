//write a program to merge two sorted arrays
#include<stdio.h>
void main(){
    int arr1[10],arr2[10],arr3[20];
    int m,n;
    printf("enter the number of element in arr1:\n");
    scanf("%d",&m);
    printf("enter the number of elements in arr2:\n");
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        printf("enter the elements in arr1 in sorted manner:\n");
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        printf("enter the elements in arr2 in sorted manner:\n");
        scanf("%d",&arr2[i]);
    }
//main logic
    int index = 0, index_first = 0,index_second = 0;
    while(index_first < m && index_second < n){
        if(arr1[index_first] < arr2[index_second]){
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else{
            arr3[index] = arr2[index_second];
            index_second++;
        }
        index++;
    }
    //if elements of the first array are over and second element have some elemnts left
    if(index_first == m) {
        while(index_second < n){
            arr3[index] = arr2[index_second];
            index_second++;
            index++;
        }
    }
    //if elements of the second array are over and first array have some elements left
    if(index_second == n){
        while(index_first < m){
            arr3[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }
    printf("sorted and merged array:\n");
    for(int i=0;i<m+n;i++){
        printf("arr3[%d] = %d\n",i+1,arr3[i]);
    }
}