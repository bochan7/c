//printing the table of multication of a number entered by user//

#include<stdio.h>
int main()
{int num,count;
 printf("enter the number\n");
 scanf("%d",&num);

 printf("multiplication table for the entered number is:\n",num);
 
 for (count=1;count<=100;count++)
 {printf("%d,%d=%d\n",num,count,(num*count));
 }
 return 0;

}