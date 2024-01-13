//Write a C program to calculate the sum of elements of an array using a pointer//
#include<stdio.h>
int main(){
    int n,sum = 0;

    printf("enter the size of array:\n");
    scanf("%d", &n);
    int arr[n];
    int *i[n];


//taking the elements of array//

    for(int a = 0 ;a < n; a++){
        printf("enter the elements:\n");
        scanf("%d", &arr[a]);
    }
    

printf("\n");
//assigning address of the stored elements to the pointer array//

    for(int b=0 ;b < n; b++){
        i[b] = &arr[b];
    } 
//sum//
for(int c = 0;c < n;c++){
 sum = sum + *i[c];
}
printf("sum of the elements of array is %d",sum);
return 0;
}