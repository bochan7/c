//write a program to dispaly add and subtract two complex number
#include<stdio.h>
int main(){
    struct number{
        int real;
        int imag;
    }c1,c2,sum_c,sub_c;
    int choice;
    do{
        printf("\nenter the operation to perform:\n");
        printf("1.add\t2.subtract\t3.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
              printf("enter the real and imaginary part of 1st complex number:\n");
              scanf("%d %d",&c1.real,&c1.imag);
              printf("enter the real and imaginary part of 2nd complex number:\n");
              scanf("%d %d",&c2.real,&c2.imag);
              sum_c.real = c1.real+c2.real;
              sum_c.imag = c1.imag+c2.imag;
              printf("the sum of the two imaginary number is:\n");
              printf("%d+%di",sum_c.real,sum_c.imag);
            case 2:
            printf("enter the real and imaginary part of 1st complex number:\n");
              scanf("%d %d",&c1.real,&c1.imag);
              printf("enter the real and imaginary part of 2nd complex number:\n");
              scanf("%d %d",&c2.real,&c2.imag);
             sub_c.real = c1.real-c2.real;
             sub_c.imag = c1.imag-c2.imag;
              printf("the subtraction of the two imaginary number is:\n");
              printf("%d+%di",sub_c.real,sub_c.imag);
             
        }
    }
    while(choice != 3);
return 0;    
}