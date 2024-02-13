#include<stdio.h>
#define MAX 4
int rear = -1;
int front = -1;
int arr[MAX];
//declaring functions

void enqueue();
void dequeue();
void display();

void main(){
int choice;

do{
    printf("----circular queue----\n");
    printf("available options are\n");
    printf("1.enqueue\t2.dequeue\t3.display\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    default:
       printf("invalid choice:\n");
        break;
    }
}
while(choice != 4);
}

//defining functions

void enqueue(){
    int q;
    printf("enter the element:\n");
    scanf("%d",&q);
    if(front == 0 && rear == MAX - 1){
        printf("stack overflowed:\n");
    }
    else if (front == -1 && rear == -1){
      front =  rear = 0;
      arr[rear] = q;
    }
    else if(front != 0 && rear == MAX -1){
        rear = 0;
        arr[rear] = q;
    }
    else{
        if( front != 0 && rear == front -1 ){
            printf("stack is full\n");
        }
        else{
            rear++;
        arr[rear] = q;
        }
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("queue is empty or underflow:\n");
    } else {
        printf("dequeued element is %d\n", arr[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
            if (front == MAX) {
                front = 0;
            }
        }
    }
}

void display(){
if(front == - 1 && rear == -1){
    printf("stack empty:\n");
}
else{
    if(front < rear){
        for(int i=front; i<=rear ;i++){
        printf("%d\n",arr[i]);
        }
    }
    else{
        for(int i = front ; i < MAX; i++){
            printf("%d\n",arr[i]);
        }
        for(int i = 0 ; i <= rear; i++){
            printf("%d\n",arr[i]);
        }
    }
}
}