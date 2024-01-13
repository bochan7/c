#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the elements:\n");
            scanf("%d",&arr[i][j]);
        }
    }
 //showcasing the matrix//
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
           
        }
        printf("\n");
    } 
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j){
                arr[i][j]=arr[i][j]-3;
            }
            else if(j>i){
                arr[i][j]=arr[i][j]+3;}
        }
}
printf("matrix after add sub\n");
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
           
        }
        printf("\n");
    } 
}