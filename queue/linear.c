//making a linear queue//
#include<stdio.h>
#define MAX 10
int front = -1;
int rear = -1;
int queue[MAX];
void enqueue();
void dequeue();
void display();
void peek();

void main(){
int choice;
do{
printf("------LINEAR QUEUE-----");
printf("(available operations are as follows:)\n");
printf("\n1.enqueue\t2.dequeue\t3.peek\t4.display\n");
scanf("%d",&choice);
switch(choice){
    case 1:
    enqueue();
    break;
    case 2:
    dequeue();
    break;
    case 3:
    peek();
    break;
    case 4:
    display();
    break;
    default:
    printf("invalid input:\n");
    }
}
while(choice != 5);
}

void enqueue(){
  int f;
  printf("enter the enter the element to insert:\n");
  scanf("%d",&f);

 if(rear == MAX - 1){
    printf("stack overflowed:\n");
 }
else if( rear == -1 && front == -1){
    front = rear = 0 ;
    queue[rear] = f ;

}
else{
    rear++;
    queue[rear] = f;
}

 }
void dequeue(){
   if(front == -1 || front > rear ){
    printf("stack underflow\n");
   }
   else{
    printf("deleted element is %d ",queue[front]);
    front ++;
   }
    }
void display(){
    if(front == -1 && rear == -1){
     printf("empty");   
    }
    else {
     for(int i = front ; i <= rear ; i++){
        printf("\n%d\n",queue[i]);
     }
    }
}
void peek(){
    printf("%d",queue[front]);
}