#include<stdio.h>
//finding factorial using function//
int facto();
int facto(int x){
int factor=1;
for(int i=1;i<=x;i++)
 {
    factor = factor*i;
 }
 return factor;
}
int main(){
    int a,factoria;
    printf("enter the value:\n");
    scanf("%d",&a);
    factoria=facto(a);
    printf("%d",factoria);
return 0;
}