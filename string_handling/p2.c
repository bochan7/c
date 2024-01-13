//using strcmp//
#include<stdio.h>
#include<string.h>
void main(){
    char name2[10],name4[10];
    printf("enter name 2:\n");
    gets(name2);
    fflush(stdin);
    printf("enter name 4:\n");
    gets(name4);
    fflush(stdin);
if(strcmp(name4,name2)==0){
    printf("string are same");
}
else{
    printf("@@");
}

}