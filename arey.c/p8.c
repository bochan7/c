//wap to insert an element in a sorted array
#include<stdio.h>
int main(){

int n;
int z;
printf("determine the size of the array:\n");
scanf("%d",&z);
int arr[z];

printf("enter how many elements you wanna enter:\n");
scanf("%d",&n);

//taking elements

if(n>z){
    printf("lol amount of number eexceeds the size of array:--fck off--");
}
else{
    for(int i = 0;i<n;i++){
        printf("enter the elements:arr[%d]\n",i+1);
        scanf("%d",&arr[i]);
    }


printf("array b4 sorting:\n");
for(int i = 0; i < n; i++){
printf("arr[%d] = %d\n",i+1,arr[i]);
}


//sorting array as we r doing insertion for sorted array

int u;
for(int i = 0 ; i < n ; i++){
    for(int t = i+1; t < n ; t++){
        if(arr[i] > arr[t]){
         u = arr[i];
         arr[i] = arr[t];
         arr[t] = u;   
        }
    }
}

printf("array after been sorted:\n");
for(int i= 0 ; i < n ; i++){
printf("arr[%d] = %d\n",i+1,arr[i]);
}

int pos,q;
printf("enter the element u wanna enter:\n");
scanf("%d", &q);

for(int i = 0; i < n;i++){
    if(arr[i] > q){
        for(int j = n-1; j >= i;j--){
            arr[j+1] = arr[j];
        }
        arr[i] = q;
        break;
    }
   
   }
}
n = n+1;
printf("array after insertion:\n");

for(int i=0;i<n;i++){
printf("arr[%d] = %d\n",i+1,arr[i]);
}

return 0;
}