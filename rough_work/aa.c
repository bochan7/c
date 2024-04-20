//insertion in middle of an array

#include<stdio.h>
void main(){
    int n;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    //taking elements of array
    int a;
    printf("how many element u wanna enter:\n");
    scanf("%d",&a);
    if(n<a){ 
       printf("array size exceeds:\n");
    }
    else{
    for(int i = 0;i<a;i++){
        printf("enter a[%d]:\n",i);
        scanf("%d",&arr[i]);
    }
    printf("elements successfully inserted:\n");
    for(int i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }
    int pos;
    printf("enter the position to where u wanna enter the element:\n");
    scanf("%d",&pos);

    int e;
    printf("Enter the element:\n");
    scanf("%d",&e);

    for(int i = a; i>=pos -1 ; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = e; 
    a++;
    printf("Element successfully entered:\n");
    for(int i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }
    //main logic for deletion
    int cos;
    printf("enter the position where u wanna delete the element:\n");
    scanf("%d",&cos);
    printf("%d element from %d position is successfully deleted:\n",arr[cos - 1],cos);
    for(int i = cos - 1 ; i<=n;i++){
        arr[i] = arr[i+1];
    } 
    a--;
    printf("Element successfully deleted:\n");
    for(int i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }

    }
}