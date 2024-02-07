#include<stdio.h>
int binary_search(int arr[],int x,int low,int high);
int binary_search(int arr[],int x,int low,int high){
    int mid;
    mid = (low+high)/2;
    while(low <= high ){
    if(arr[mid] < x){
        low = mid + 1;
    }
    else if (arr[mid] > x){
        high = mid - 1;
    }
    else if ( arr[mid] == x){
        return mid;
        break;
    }

}
return -1;
}
void ascend_sort();
void ascend_sort(int n,int arr[]){
    int t;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
         if(arr[i]>arr[j]){
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = arr[i];
         }


        }
    }
return 0;
}


int main(){
int n,x,found =0;
printf("enter the size of the array:\n");
scanf("%d",&n);
int arr[n];
for(int i = 0 ; i<n;i++){
    printf("enter the elements:\n");
    scanf("%d",&arr[i]);
}
printf("the array b4 sorting:\n");
for(int i =0;i<n;i++){
    printf("%d",arr[i]);
}

int sort;
ascend_sort(n, arr[n]);
printf("the array after sorting:\n");

for(int i =0;i<n;i++){
    printf("%d",arr[i]);
}

}
