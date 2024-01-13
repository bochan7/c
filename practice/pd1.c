//wap to find if the enterd number is a palindrome or not//
#include<stdio.h>
int main(){
 int x,r,a,sum=0;
 printf("enter the number to check if the entered number is palindrome or not:\n");
 scanf("%d",&x);
 a=x;
 while(x>0){
    
    r = x%10;
    sum = r+(sum*10);
    x=x/10;
 } 
if(sum==a){
    printf("pallindrome!!");
}
else
printf("no pallindrome");
return 0;
}