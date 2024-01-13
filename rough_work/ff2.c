//findin factorial using recursion//
#include<stdio.h>
int facto();
int facto(int x){
    if(x==0){
        return 1;
    }
    if(x==1){
        return 1;
    }
    else{
        return x*facto(x-1);
    }
}
int main(){
    int a,ans;
    printf("enter number\n ");
    scanf("%d",&a);
    ans = facto(a);
    printf("%d",ans);
return 0;
}