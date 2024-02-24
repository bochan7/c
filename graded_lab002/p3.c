//stack 
#include<stdio.h>
#define MAX 5
int arr[MAX];
int top = -1;
void push();
void pop();
void display();

int main(){ 
        int choice;
        do{
    printf("----STACK----\n");
    printf("you have following choices of operation:\n");
    printf("1.PUSH\t2.POP\t3.DISPLAY\t.4Exit\n");
    scanf("%d",&choice);
    switch (choice)
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
    printf("invalid input:\n");
        break;
    }
    }
    
    while(choice != 4);
}

//function definition
void push(){
    if(top == MAX -1 ){
        printf("stack overflow:\n");
    }
    else{
        top++;
        int x;
        printf("enter the element:\n");
        scanf("%d",&x);
         arr[top] = x;
    }
}

void pop(){
    if(top == -1){
        printf("stack is empty:\n");
    }
    else{
        printf("popped out element is %d",arr[top]);
        top -- ;
    }
}

void display(){
if(top == -1){
    printf("STAck is empty nothing to display:\n");

}
else{
    for(int i = 0 ; i <= top ;i++){
        printf("%d\n",arr[i]);
    }
}


}