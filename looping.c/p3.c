//printing multiplication table using while loop//
#include<stdio.h>
int main(){
int i,n;
i=1;
printf("enter the number of whose table you wanna see:\n",n);
scanf("%d",&n);
while(i<=10){
printf("%d * %d = %d\n",i,n,n*i);
i=i+1;
}
return 0;

}