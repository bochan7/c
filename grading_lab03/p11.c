//wap defines a function to add first n number//
#include<stdio.h>
int cal_sum(int x);
int cal_sum(int x){
    int sum = 0;
    for(int i = 0; i <= x;i++ )
    {
        sum = sum + i;
    }
   
  return(sum);
}
int main(){
    int n;
    int final_sum;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    final_sum = cal_sum(n);
    printf("The sum of number till %d is %d",n,final_sum);
    return 0;
}