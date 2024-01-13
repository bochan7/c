/*
    *
   **
  ***
*****
printing this pattern for n=5 rows

*/


#include<stdio.h>
int main(){
int n=5;
for(int i=0;i<5;i++)
 {
  for(int j=0;j<5;j++)
   { if(i+j>=4)
      {
       printf("*");

      }
      else
      {
        printf(" ");
      }
   }
 
 printf("\n");
 }
return 0;

 }




