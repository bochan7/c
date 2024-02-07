//write a program to take n digit as input and form a number
#include<stdio.h>
#include<math.h>
int main(){
int number =0,digit[10],numofdigit,i;
printf("enter the number of digit:\n");
scanf("%d",&numofdigit);
for(i=0;i<numofdigit;i++){
    printf("\nenter the dogit at position %d\t",i+1);
    scanf("%d",&digit[i]);
}
i=0;
while(i<numofdigit){
    number = number + digit[i]*pow(10,i);
    i++;
}

printf("the number is %d",number);
return 0;

} 