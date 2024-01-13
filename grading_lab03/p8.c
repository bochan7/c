//describe a program to multiply two matrix//

#include<stdio.h>
int main(){
   int r1,c1,r2,c2,sum;
   int matrix1[100][100], matrix2[100][100], multi[100][100];

//determining the size of matrix 1 and matrix 2//

   printf("enter the number of rows in matrix 1:\n");
   scanf("%d", &r1);
   printf("enter the of columns in matrix 1:\n");
   scanf("%d", &c1);
   printf("enter the number of rows in matrix 2:\n");
   scanf("%d", &r2);
   printf("enter the number of columnns in matrix 2:\n");
   scanf("%d", &c2);


//necessary condition for multiplication of two matrices is that the number of// 
//rows in columns in matrix 1  shld be equal to  number of rows in matrix 2//

if(c1 == r2)
{//taking the elements from the user//

//for matrix 1//

   for(int i = 0; i < r1; i++){
      for(int j = 0; j < c1; j++) {
        printf("enter the values for matrix 1:\n");
        scanf("%d ", &matrix1[i][j]);
      }
    }

//for matrix 2//

for (int i = 0; i < r2; i++)
{
    for(int j = 0; j < c2; j++)
    {
        printf("enter the vakues for matrix 2:\n");
        scanf("%d ", &matrix2[i][j]);
    }
}

// initiLIZE THE MULTI MATRIX to 0//
for(int i = 0; i < r1; i++)
{
    for(int j = 0; j < c2; j++ ){
        multi[i][j] = 0;
    }
}

//main logic for multiplication//

for(int i = 0 ; i < r1 ; i++)
 {
    for(int j = 0 ; j < c2 ; j++)
    {
        sum = 0;
        for(int k = 0; k < r1; k++)
       {
        sum = sum + (matrix1[i][k] * matrix2[k][j]);
       }      
      multi[i][j] = sum;
       
    }

    
 }
 
 for(int i = 0; i < r1 ; i++)
 {
    for(int j = 0; j < c2; j++)
    {
        printf("%d\t" , multi[i][j]);
    }
    printf("\n");
 }

}
else
{
    printf("multiplication of these two matrices is not possible !!");
}
return 0;

}