//printinf factorial of a number//
#include<stdio.h>
int main(){
int n;
unsigned long long factorial =1;
printf("enter the positive number:");
scanf("%d",&n);
if(n<0){
 printf("**error**//negative number not allowed//");

} else {

 for(int i=1;i<=n;i++){
factorial*=i;
 }
printf("factorial of %d=%llu\n",n,factorial);

}

return 0;
}


