#include<stdio.h>
int main(){
int n,m;
printf("enter the number of rows:\n");
scanf("%d",&n);
printf("enter the number of columns:\n");
scanf("%d",&m);

int arr[n][m];

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    printf("enter the value:\n");
    scanf("%d",&arr[i][j]);
  }
}
printf("\n");
for(int i= 0;i < n;i++){
    for(int j= 0;j < m;j++){
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
}