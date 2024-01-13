//to raise b in power of a//
#include<stdio.h>
int main(){
    int a,b,pow=1;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    
    for(int i=0;i<a;i++){
       pow = a*pow;
    }
printf("%d",pow);
}
