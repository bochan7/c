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
printf("array b4 insertion:\n");
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}


int val,pos;
printf("enter the value to insert:\n");
scanf("%d",&val);
printf("enter the position:\n");
scanf("%d",&pos);

for(int i = n;i>=pos;i--){
    arr[i+1] = arr[i];
}

arr[pos] = val;
printf("array after insertion:\n");
for(int i = 0;i<n+1;i++){
    printf("%d\n",arr[i]);
}
}

}