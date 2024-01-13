#include<stdio.h>
void swp(int *i,int *j);
void swp(int *i,int *j){
    int t;
    t=*i;
    *i=*j;
    *j=t;
    

}
void main(){
    int a,b;
    int *m,*n;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("before swapping a=%d b=%d\n",a,b);
    swp( &a, &b); 
    printf("after swapping a=%d b=%d ",a,b);

}