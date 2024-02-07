//to find duplicate number in an array 
#include<stdio.h>
int main(){
int n;
printf("enter the size of the array\n");
scanf("%d",&n);
int arr[n];
for(int i = 0;i<n;i++){
    printf("enter the elements:\n");
    scanf("%d",&arr[i]);
}
for(int i = 0;i<n;i++){
    for(int t=i+1;i<n;t++){
        if(arr[i] == arr[t]){
            printf("smiliar element found at %d and %d\n",i+1,t+1);
            continue;
        }
    }
}

return 0;

}