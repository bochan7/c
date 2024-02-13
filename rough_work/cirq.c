//wap for circular queue
#include<stdio.h>
#define MAX 6 // declaring macro
int rear = -1; // for insertion
int front = -1; //for deletion
int arr[MAX]; //declaring array
void enqueue();
void dequeue(); //declaring func
void display();
void main(){
int n;
printf("how many elements you wanna enter:\n");
scanf("%d",&n);
if(n > MAX){
    printf("exceeeds array size can't be executed:\n");
}
else{
    for(int i = 0 ; i < n;i++){
        printf("enter the elements:\n");
        scanf("%d",&arr[i]);
    }
}
int choice;
do {
    
    printf("----circular--queue----");
    printf("available options are\n");
    printf("1.enqueue\t2.dequeue\t3.display\t4.exit");
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
        printf("exiting the program:\n");
        break;
        default:
        printf("invalid choice\n");
        break;
    }
}
while(choice != 4);
}
//defining dequeue
void enqueue(){
int n;
printf("enter the element:\n");
scanf("%d",&n);
  
    if(front == 0 && rear == MAX -1){
    printf("stack overflowed:\n");
      }
    else if(front == -1 && rear == -1){
         front = rear = 0 ;
         arr[rear] = n; 
    }
    else{
        if(front != 0 && rear == MAX -1){
            rear = 0;
            arr[rear] = n;
        }
        else{
            rear++;
            arr[rear] = n ;
        }
    }
}