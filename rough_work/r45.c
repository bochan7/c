#include <stdio.h> 
// Function to find union of two arrays 
int findUnion(int arr1[], int arr2[], int m, int n, int unionArr[]) { 
int i = 0, j = 0, k = 0; 
while (i < m && j < n) { 
if (arr1[i] < arr2[j]) 
unionArr[k++] = arr1[i++]; 
else if (arr2[j] < arr1[i]) 
unionArr[k++] = arr2[j++]; 
else { 
unionArr[k++] = arr1[i++]; 
j++; 
} 
} 
while (i < m) 
unionArr[k++] = arr1[i++]; 
while (j < n) 
unionArr[k++] = arr2[j++]; 
return k; 
} 
// Function to find intersection of two arrays 
int findIntersection(int arr1[], int arr2[], int m, int n, int interArr[]) 
{ 
int i = 0, j = 0, k = 0; 
while (i < m && j < n) { 
if (arr1[i] < arr2[j]) 
i++; 
else if (arr2[j] < arr1[i]) 
j++; 
else { 
interArr[k++] = arr1[i++]; 
j++; 
} 
} 
return k; 
} 
int main() { 
int arr1[] = {1,2,3,3,4,4,4,5,6,7,7}; 
int arr2[] = {3,3,4,5,6,7,7,7,8,8,9}; 
int m = sizeof(arr1) / sizeof(arr1[0]); 
int n = sizeof(arr2) / sizeof(arr2[0]); 
int unionArr[m + n]; 
int interArr[m < n ? m : n]; 
int unionSize = findUnion(arr1, arr2, m, n, unionArr); 
int interSize = findIntersection(arr1, arr2, m, n, interArr); 
printf("Union of the arrays: "); 
for (int i = 0; i < unionSize; i++) 
printf("%d ", unionArr[i]); 
printf("\n"); 
printf("Intersection of the arrays: "); 
for (int i = 0; i < interSize; i++) 
printf("%d ", interArr[i]); 
printf("\n"); 
return 0; 
} 