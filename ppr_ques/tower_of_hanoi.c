#include<stdio.h>
void move(int ,char,char,char );
void  main(){
    int n;
    printf("enter the number of disk:\n");
    scanf("%d",&n);
    move(n,'A','B','C');
}

void move(int n,char a,char b,char c){
    if(n == 1 ){
        printf("move disk %d from %c to %c\n ",n,a,c);
    }
    else{
        move(n-1,a,c,b);
        printf("move disk %d from %c to %c\n",n,a,c);
        move(n-1,b,a,c);
    }
}