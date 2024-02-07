//insertiong element in the middle of an array
#include<stdio.h>
int main(){
int z;
printf("determine the size of the array:\n");
scanf("%d",&z);
int arr[z];
int n,x,pos;
printf("how many elements u wanna enter ??:\n");
scanf("%d", &n);
if(n > z){
printf("lol size exceeds:");
}
else  {
for(int i = 0; i < n ; i++){
    printf("enter the element at arr[%d]\n",i+1);
    scanf("%d",&arr[i]);
}
printf("enter the element you wanna insert:\n");
scanf("%d",&x);
printf("enter the position at which u wanna insert %d:\n !! remember it must be bwlow ur allocated size i.e %d!!\n",x,n);
scanf("%d",&pos);
printf("array b4 insertion:\n");
    for(int i = 0; i < n
      ;i++){
    printf("arr[%d] = %d\n",i+1,arr[i]);                
    }

if(pos-1 <= n-1){

for(int i = n - 1 ; i >= pos - 1; i--){
   arr[i+1] = arr[i];
   
   }
arr[pos - 1] = x;  

printf("array after insertion:\n");
    for(int i = 0; i < n+1  ;i++){
    printf("arr[%d] = %d\n",i+1,arr[i]);                
    }

}
else{
    printf("can't be done as the pos exceeds array size:\n");
}
}
return 0;
}