//2nd program binary search
#include<stdio.h>
void main(){
    int z;
    printf("determine the size of the array:\n");
    scanf("%d",&z);
    int arr[z];
    int n;
    printf("how many element u wanna enter:\n");
    scanf("%d",&n);
    //taking element from the user
    for (int i=0;i<n;i++){
        printf("enter the elements:\n");
        scanf("%d",&arr[i]);
    }
    //for binary search array needed to be sorted
    printf("array b4 sorting:\n");
    for(int i=0;i<n;i++){
        printf("arr[%d] = %d\n",i+1,arr[i]);
    }
    //soritng array in ascending order
    int t;
    for(int i = 0;i<n;i++){
        for(int u = i+1;u<n;u++){
            if(arr[i] > arr[u]){
                t= arr[i];
                arr[i] = arr[u];
                arr[u] = t;
            }
        }
    }
    printf("array after sorting:\n");
    for(int i=0;i<n;i++){
        printf("arr[%d] = %d\n",i+1,arr[i]);
    }

//main code for binary search
int d;
printf("enter the search element:\n");
scanf("%d",&d);
int low,high,mid,count = 0;
low = 0;
high = n;

while(low <= high){
    mid = (low+high)/2;
    if(arr[mid] == d){
        count ++;
        break;
    }
   else{
    if(arr[mid] > d ){

        high = mid -1 ;
    }
    else{
        low = mid + 1;
    }


   }
}

if(count == 0){
    printf("not found:\n");
}
else{
    printf("value found:\n");
}
}