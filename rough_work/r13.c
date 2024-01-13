//wap to find factorial using a number//
#include<stdio.h>
int factorial(int x);
int factorial(int x){
    int factor =1;
    for(int i=1;i<=x;i++){
        factor = factor*i;
    }
return factor;
}
int main(){
    int x,factori;
    printf("enter the number:\n");
    scanf("%d",&x);
    factori = factorial(x);
    printf("%d",factori);
return 0;
}