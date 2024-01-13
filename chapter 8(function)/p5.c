#include<stdio.h>
int main(){
    int arr[3]={1,2,3};
    int x;
    printf("what do u wanna find ?\n");
    scanf("%d",&x);
    for(int i=0;i<=3;i++){
        if(x==arr[i]){
            printf("%d found !!",arr[i]);
        }
        
        else{
            printf("not found ");
        }

}

}