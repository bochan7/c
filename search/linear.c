//linear search
#include<stdio.h>
int main(){ 
    int n,count=0;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the elements:\n");
        scanf("%d",&arr[i]);
    }
int x;
printf("enter the search element:\n");
scanf("%d",&x);
for(int i=0;i<n;i++){
 if(arr[i] == x ){
    
    count ++;
 }

}
if(count != 0){
    printf("element found:\n");

}
else {
    printf("lmaom element not found:\n");
}

}