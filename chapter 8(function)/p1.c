//to add two numbr suing function//
#include<stdio.h>
//function declaration//
int sum();
int sum(int x,int y){
    int add;
    add=x+y;
    return add;
}
int main(){
    int a,b;
    int summ;
    printf("enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    summ=sum( a, b );
    printf("%d",summ);
}