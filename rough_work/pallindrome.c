#include<stdio.h>
int main(){
int n,original,reversed=0,remainder;
printf("enter the number:\n");
scanf("%d",&n);
original = n;
while(n != 0){
   remainder = n % 10;
   reversed = reversed * 10 + remainder;
   n /=10;

}
if(original == reversed){
    printf("pallindrome:\n");
}
else{
    printf("not a pallindrome:\n");
}
return 0;
}