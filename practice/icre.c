#include<stdio.h>
int main(){
int a=1,b=3;
b=a++ + a++ +a+++a++;
printf("a=%d\nb=%d",a,b);
return 0;
}
