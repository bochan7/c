#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("determine the number of rows in matrix 1:\n");
    scanf("%d",&r1);
    printf("determine the number of columns in matrix 1:\n");
    scanf("%d",&c1);
    printf("determine the number of rows in matrix 2:\n");
    scanf("%d",&r2);
    printf("determine the number of rows in matrix 2:\n");
    scanf("%d",&c2);
    if(c1 == r2){
            int matrix_1[r1][c1];
            int matrix_2[r2][c2];
            int matrix_3[r1][c2];
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    printf("enter the elements matrix 1[%d][%d]",i,j);
                    scanf("%d",&matrix_1[i][j]);
                }
            }
            for(int i=0;i<r2;i++){
                for(int j=0;j<c2;j++){
                    printf("enter the elements matrix 2[%d][%d]",i,j);
                    scanf("%d",&matrix_2[i][j]);
                }
            }

        //initializing the 3rd matrix to 0
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                matrix_3[r1][c2] = 0;
            }
        }
        int sum;
        //main logic
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                sum = 0;
                for(int k=0;k<r1;k++){
                    sum = sum + (matrix_1[i][k]*matrix_2[k][j]);
                }
                matrix_3[i][j] = sum;
            }
        }
    printf("--multiplied--matrix--\n");
           for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                
                printf("%d\t",matrix_3[i][j]);
            }
            printf("\n");
        } 
    }
else{
    printf("multiplication not possible:\n");
}
return 0;
}