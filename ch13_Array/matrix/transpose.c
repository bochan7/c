//write a program to find  transpose of a 3x3 matrix
#include<stdio.h>
void main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the element arr[%d][%d]\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n----original--matrix----\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);          
        }
        printf("\n");
    }
    int transpose_matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose_matrix[i][j] = arr[j][i];
        }
    }
    printf("\n----transposed--matrix----\n");
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",transpose_matrix[i][j]);
        }
        printf("\n");
    } 
}