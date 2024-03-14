//write a program to initialize the member of a structure by using a pointer to the structure
#include<stdio.h>
struct student{
    int r_no;
    char name[20];
    char course[20];
    int fees;
};
int main(){
    struct student stud1, *ptr_stud1;
    ptr_stud1 = &stud1;
    printf("enter the details of the student:\n");
    printf("enter the roll no:\n");
    scanf("%d",&ptr_stud1->r_no);
    printf("\nenter the name =");
    gets(ptr_stud1->name);
    printf("\nenter the course:\n");
    gets(ptr_stud1->course);
    printf("enter the fees:\n");
    scanf("%d",&ptr_stud1->fees);
    printf("--DETAILS--OF--THE--STUDENT--\n");
    printf("\nROLL NO. = %d",ptr_stud1->r_no);
    printf("\n NAME = %s",ptr_stud1->name);
    printf("\nCOURSE = %s",ptr_stud1->course);
    printf("\n FEES = %d",ptr_stud1->fees);
return 0;
}