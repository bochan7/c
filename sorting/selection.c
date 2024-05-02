#include<stdio.h>
int smallest(int arr[],int k,int n);
int selection_sort(int arr[],int n);


void main(){
    int arr[10];
    int n;
    printf("enter the number of elements u wanna enter:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the element:\n");
        scanf("%d",&arr[i]);
    }
   printf("array b4 sorting:\n");
   for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
   }

   selection_sort(arr,n);
   printf("array after sorting:\n");
   
   for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
   }

}

int selection_sort(int arr[],int n){
int k,pos,temp;
for(k=0;k<n;k++){
    pos = smallest(arr,k,n);
    temp = arr[k];
    arr[k] = arr[pos];
    arr[pos] = temp;
}

}


int smallest(int arr[],int k,int n){

int pos = k,small = arr[k];
for(int i=k;i<n;i++){
    if(arr[i]<small){
        small = arr[i];
        pos = i;
    }
}

return pos;
}