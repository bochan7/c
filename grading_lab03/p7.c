//devlop a program to add two matrices//

#include<stdio.h>
int main(){
int r,c,sum[100][100],arr1[100][100],arr2[100][100];
int i,j;
printf("enter the number of rows of matrices:\n"); //entering the number of rows and columns of matrix//
scanf("%d",&r);
printf("enter the number of columns of matrices\n");
scanf("%d",&c);

//entering elements in matrix1//

for(int i=0;i<r;i++)

{
 for(int j=0;j<c;j++)
  {printf("enter the elements of matrix 1\n");
   scanf("%d",&arr1[i][j]);
  }
}

//entering elements in matrix2//

for(int i=0;i<r;i++)

{
 for(int j=0;j<c;j++)
  {printf("enter the elements of matrix 2\n");
   scanf("%d",&arr2[i][j]);
  }
}
//sum of two matrix//
printf("\n");

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    sum[i][j] = arr1[i][j] + arr2[i][j];
}
//printing the result//
printf("the sum of the two matrices\n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
  printf("%d\t",sum[i][j]);
  }
printf("\n");
}
return 0;
}