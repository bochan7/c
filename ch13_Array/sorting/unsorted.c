//merging of two unsorted arrays
#include<stdio.h>
void main(){
    int arr1[10],arr2[10],arr3[30];
    int m,n;
    printf("enter the number of elements to be inserted in arr1\n");
    scanf("%d",&m);
    printf("enter the number of elements in second array:\n");
    scanf("%d",&n);
for (int i=0;i<m;i++){
    printf("enter the elements in arr1[%d]\n",i+1);
    scanf("%d",&arr1[i]);
}
for(int i=0;i<n;i++){
    printf("enter the elements in the arr2[%d]\n",i+1);
    scanf("%d",&arr2[i]);
}
//copying elements from array 1 to array 3(merged array)
int index = 0;

for(int i=0;i<m;i++){
   arr3[index] = arr1[i];
   index++;
}

for(int i=0;i<n;i++){
  arr3[index] = arr2[i];
  index++;
}
for(int i=0;i<m;i++){
printf("the array 1 is arr1[%d] = %d\n",i+1,arr1[i]);
}
printf("-------------\n");
for(int i=0;i<n;i++){
    printf("the array 2 is arr2[%d] = %d\n",i+1,arr2[i]);
}
//displaying the merged array

printf("\nthe merged array is:\n");
for(int i=0;i<index;i++){
    printf("arr[%d] = %d\n",i+1,arr3[i]);
}

}