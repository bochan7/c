//deletion of an element from an array
#include<stdio.h>
int main(){
    int n;
    printf("determine the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    int z;
    printf("how many elements you wanna enter:\n");
    scanf("%d",&z);
    if(z>n){
        printf("lmao the size exceeds:\n");
    }
    else
    {
    for(int i=0;i<z;i++){
        printf("enter the elements a[%d]\n",i+1);
        scanf("%d",&arr[i]);
    }
    //showcasing array
    printf("original array:\n");
    for(int i=0;i<z;i++){
        printf("arr[%d] = %d\n" ,i+1,arr[i]);
    }
    int a,pos = 0;
    printf("enter the element u wanna delete:\n");
    scanf("%d",&a);
    for(int i = 0;i<z;i++){
        if(arr[i] == a){
            pos = i;
            break;
        }
    }
    if(pos == 0){
        printf("element is not there:\n");
    }
    else{
        for(int i = pos;i<z-1;i++){
            arr[i] = arr[i+1];
        }
    
printf("array after deletion:\n");
for(int i=0;i<z-1;i++){
    printf("arr[%d]=%d\n",i+1,arr[i]);
}
} 
    
}
}