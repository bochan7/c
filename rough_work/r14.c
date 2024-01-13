//using switch case//
#include<stdio.h>
int main(){
    int day;
    printf("enter the number from (1 to 7)");
    scanf("%d",&day);
    switch (day){
        case 1:
         printf("monday");
        break;
        case 2:
         printf("tuesday");
        break;
        default:
        printf("try again:\n");
    }
return 0;
}