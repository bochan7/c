//copying element of an array to another array//
#include<stdio.h>
int main(){
int n, arr1[100], arr2[100];

printf("enter the size of an array:\n");
scanf("%d", &n);

for(int i = 0; i < n; i++)
 { printf("enter the elements:\n");
   scanf("%d", &arr1[i]);
 }

 for (int i = 0; i < n; i++)
 {
  arr2[i] = arr1[i];
 }

printf("elements in array 1: ");
for (int i = 0; i < n; i++){
 printf("%d ",arr1[i]);
}

printf("\nElements in array 2: ");
for (int i = 0;i < n;i++){
 printf("%d ",arr2[i]);
}


return 0;
}