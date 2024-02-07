#include<stdio.h>
#define MAXSIZE 10  //defining macro
int stack [MAXSIZE],top=-1; // declaring stack as static array following array fifo order is stack n the dynamic array following fifi will be linked list// 
                            //heart of all operation
void push();
void pop();
void display();

void main(){
int choice;

do{
printf("-------stack--------\n");
printf(" choose wht u wanna do:\n");
printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
scanf("%d",&choice);
printf("--------------------\n");
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
default:
printf("Invalid input FOOL:\n");
}
}
while (choice != 4);
}

//pushing elment
void push(){
if(top == MAXSIZE - 1){
    printf("stack overflow:\n");
}
else{ 
    int x;
    printf("enter the element to push in stack:\n");
    scanf("%d",&x);
    top++;
    stack[top] = x ;
    
}
}

//poping element
void pop(){
if(top == -1){
    printf("stack is empty");
}
else {
     int y;
     y = stack[top];
     printf("popped out element is %d\n",y);
    top --;
}
}

void display(){
    if(top == -1){
        printf("noting to display fck off:\n");
    }
    else{
        printf("the stack is:\n");
        for(int q = top;q > -1;q --){
            printf("%d\n\n",stack[q]);
        }
    }
}

