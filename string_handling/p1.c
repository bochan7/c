#include<stdio.h>
#include<string.h>

//to find length of the string//
void main(){
    char name[10];
    printf("enter name:\n");
    gets(name);
    printf("%d",strlen(name));
}