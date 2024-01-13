#include<stdio.h>
//to raise power of a in b//
int poww();
int poww(int a, int b){
    int ans = 1 ;
    for(int i=1;i<=b;i++){
        ans= ans*a;
    }
    return ans;
}
int main(){

int x,y,answer;
printf("enter the number:\n");
scanf("%d",&x);
printf("enter the power to be raised:\n");
scanf("%d",&y);
answer = poww(x,y);
printf("%d",answer);
}