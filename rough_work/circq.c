#include<stdio.h>
#define MAX 4
int arr[MAX];
int rear = -1;
int front = -1;
void enqueue();
void dequeue();
void display();

void main(){
    int choice;
    do{
        printf("\n----circular--queue----\n");
        printf("\navailable choice are:\n");
        printf("\n1.enqueue\t2.dequeue\t3.display\t4.exit\n");
        printf("\nenter ur choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            break;
            default:
            printf("wrong input:\n");
        }
    }
    while(choice != 4);
} 
//defining functions
void enqueue(){
    int q;
    printf("enter the element to enter:\n");
    scanf("%d",&q);

    if(front == 0 && rear == MAX-1){
        printf("!!--queue has overflowed,can't enter--!!:\n");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        arr[rear] = q;
    }
    else if(front != 0 && rear == MAX - 1){
            rear = 0;
            arr[rear] = q;
        }
    else{
        if( rear == front - 1){
            printf("stack is full:\n");
        }
        else{
            rear++;
            arr[rear] = q;
        }
    }      
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("queue is underflow or empty:\n");
    }
    else{
        printf("dequed element is %d",arr[front]);
        if(front == rear){
            front = rear = -1;
            printf("\nstack hs now became empty:\n");
        }
        else{
            front++;
            if(front == MAX ){
                front = 0;
            }
        }
    }
}

void display(){
    printf("------\n");
    if(front == -1 && rear == -1){
        printf("queue is empty:\n");
    }
    else{
        if(front < rear){
            for(int i = front ; i <= rear ; i++){
                printf("%d\n",arr[i]);
            }
        }
        else{
            for(int i = front ; i < MAX ; i++){
                printf("%d\n",arr[i]);
            }
            for(int i = 0 ; i <= rear; i++){
                printf("%d\n",arr[i]);
            }
        }
    }
}
