#include<stdio.h>
int fibbo(int);
int fibbo(int x){
if(x==0){
    return x;
}
else if(x==1){
    return 1;
}
else
 return (fibbo(x-1)+fibbo(x-2));

}
void main(){
    int a,m=0;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("fibbonacci series:\n");
    for(int i=1;i<=a;i++){
    printf("%d",fibbo(m));
    m++;
    }
}