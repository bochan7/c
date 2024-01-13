#include<stdio.h>
int main(){
int a=14,b=20,c;
/*bitwise operator works bit by bit*/
/*binary of a(14)is 01110
binary of b(20) is 10100*/
/*so is we use bitwise operator &(AND)the output should be 4*/
c=a&b;
printf("output:%d",c);
return 0;


}