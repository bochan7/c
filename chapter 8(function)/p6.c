//checking whether a number is prime or not//
#include<stdio.h>
int main(){
    int x,count=0;
    printf("enter the value of x:\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        printf("enterd number %d is prime",x);
    }
    else{
        printf("entered number is not prime");
    }
}