#include<stdio.h>
void main(){
int n;
printf("enter the number of values u want to enter in the array:\n");
scanf("%d",&n);
int arr[13];

if(n>13){
    printf("number of value exceed the array size:\n");
}
else{
for(int i=0;i<n;i++){
    printf("Enter the elements:\n");
    scanf("%d",&arr[i]);
}
printf("array b4 deletion:\n");
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}


int pos;
printf("enter the position:\n");
scanf("%d",&pos);

for(int i = pos+1;i < n ;i++){
    arr[i-1] = arr[i];
}
printf("array after deletion:\n");
for(int i = 0;i<n-1;i++){
    printf("%d\n",arr[i]);
}
}

}
