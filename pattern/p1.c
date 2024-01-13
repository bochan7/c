// printing of star pattern//
//*
//**
//***
//****

#include<stdio.h>
int main(){
int n;
printf("enter the number of lines\n");
scanf("%d",&n);
for(int i=0;i<=n;i++)
 {for(int j=0;j<i+1;j++)
  {printf("*");}
 
 printf("\n");}
 return 0;
}