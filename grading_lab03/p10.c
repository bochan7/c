//wap to calculate simple interest using function//
#include<stdio.h>
int cal_si(int x,int y,int z);
int cal_si(int x,int y,int z){
    int si;
    si=(x*y*z)/100;
    return(si);
}
int main(){
   int p,r,t,si;
    printf("enter the principle amount:\n");
    scanf("%d",&p);
    printf("enter the rate of interest:\n");
    scanf("%d",&r);
    printf("enter the time period:\n");
    scanf("%d",&t);
    si = cal_si(p,r,t);
    printf("the simple interest is:%d",si);
 return 0;
}