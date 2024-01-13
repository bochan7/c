#include<stdio.h>
int main(){
int n;
printf("enter the size of array:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter the values:\n");
    scanf("%d",&arr[i]);
}
//to counte no. of positive and negative number//
int pos_count =0;
int neg_count=0;
for(int k=0;k<n;k++){
  if(arr[k]>0){
  pos_count ++;
  }
  else
  { neg_count++;
  }
}
printf("number positive %d\n",pos_count);
printf("number negative %d\n",neg_count);

for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}



}