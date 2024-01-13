#include<stdio.h>    
#define MAXSIZE 10
int stack[MAXSIZE],top = -1;
void push();
void pop();
void display();

void main(){
int choice;
do {
    
    printf("------stack------\n");
    printf("\n1.push \n2.pop\n3.display\n4.exit\n ");
    printf("-------------\n");
    printf("enter your choice:\n");
   scanf("%d",&choice);
 switch(choice){
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
    printf("invalid input:\n");
}}
while(choice != 4);
}
               //declaring the functions///


            //defining the functions//

void push(){             //defining the push function first//
    
    if(top == MAXSIZE-1 ){
        printf("stack is overflowed:\n");
    }                     //checking the first condition if stack is overflowed or not//
    else{
    int x;
    printf("enter the element:\n");
    scanf("%d",&x);
    top++;
    stack[top]= x;

    }
}
void pop(){
    
    if(top == -1 ){
        printf("nothing to pop out:\n\n");
    }
    else{
        int y;
        y = stack[top];
        printf("popped element %d\n",y);
        top--;
    }
}
void display(){
    if(top == -1){
        printf("empty:\n");
    }
    else{
        printf("---elements---\n");
        for(int q = top;q>-1;q--){
            printf("%d\n\n",stack[q]);
        }
    }

    }