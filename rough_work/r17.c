#include<stdio.h>
int main(){
    int a;
    
    printf("enter the value of a:\n");
    scanf("%d",&a);
    double b = (double) a;
    printf("%.4lf",b);
    return 0;
}