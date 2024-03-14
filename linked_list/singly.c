#include<stdio.h>
#include<malloc.h>

struct node{     //creating strucutre for node
    int data;
    struct node *add;
};
struct node *start = NULL,*pointer,*new_node;

//declaring functions

void create();
void display();
void main(){
    int choice;
    printf("\n");
    printf("----linked--list----\n");
    do{
     printf("you have following operations to perform:\n");
     printf("1.insert\t2.display3.\texit:\n");
     printf("\n(enter ur choice:\n)");
     scanf("%d",&choice);
     switch(choice){
        case 1:
         create();
         break;
        case 2:
         display();
        case 3:
         printf("EXIT:\n");
         break;
        default:
         printf("invalid input:\n");
     }
    }
    while(choice !=3);
}

void create(){
    int n;
    printf("enter the element:\n");
    scanf("%d",&n);
    start = (struct node *)malloc(sizeof(struct node));
    start->data=n;
    start->add=NULL;
   pointer = start;
   int z;
    printf("to end the this option enter -1:\n");
    scanf("%d",&z);
    while(z != -1){
        printf("enter the number:\n");
        scanf("%d",&n);
        new_node = (struct node *)malloc(sizeof(struct node)); //allocation for new node
       new_node->data = n;    //here our data is stored in new node
       new_node->add = NULL;  //here address portion of our new node is been set to null
    pointer->add = new_node; //pointer which is at start now will store the address of the new node in that start 
    pointer =pointer->add; //n we will be shifting pointer to the new node in this way we will be able to store the address of new nod in previous node
    }
}

void display(){
    if(start == NULL){
        printf("linked list empty now");
    }
   else{
    while(pointer != NULL){
        printf("%d",pointer->data);
        pointer=pointer->add;
    }
 



    }
}