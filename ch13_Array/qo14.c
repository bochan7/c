//write  a program to interchange largest and smallest number in an array
#include<stdio.h>
int main(){
    int *ptr;
    int arr[] = {1,2,3,4,5};
    printf("\n address of the array is %p\n %p\n %p\n",arr,&arr[0],&arr);
    ptr = &arr[0];
    ptr++;
    printf("pointer holds the second element now %d",*ptr);
    ptr = &arr[2];
    *ptr = -1;
    *(ptr + 1)=0;
    *(ptr -1) = -1;
    printf("array is\n");
    for(int i=0;i<5;i++){
        printf("%d\t",*(arr+i));
    }
return 0;
}