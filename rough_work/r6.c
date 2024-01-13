//printing horizontal rows n columns//
#include<stdio.h>
int main(){
 int rows;
 int columns;
 printf("enter rows:");
 scanf("%d",&rows);
 printf("enter columns");
 scanf("%d",&columns);
 for(int i=0;i<rows;i++)
 { for(int j=0;j<columns;j++)
 printf("*");
 }
 printf("\n");

 
return 0;


}