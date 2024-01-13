//write a c program to swap the value of two variable using call by value and call by reference method//
//swapping by call by value//
#include<stdio.h>
void swap(int a,int b);
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("after swapping the value of a=%d and b= %d",a,b);
    } 
void main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("before swapping the value of a = %d and b = %d\n ",a,b);
    swap(a, b);
    

}