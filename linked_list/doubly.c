#include<stdio.h>
#include<malloc.h>

struct node{
    struct node *l_add;
    int data;
    struct node *r_add;
};
struct node *start = NULL,*pointer,*new_node;

void create();
void display();
void display_reverse();

void main(){
    int choice;
    printf("\n----DOUBLY--LINKED--LISt\n");
    do{
      printf("(you have following options:)\n");
      printf("1.CREATE\t2.DISPLAY\t3.DISPLAY ELEMENTS FROM BACK\t4.EXIT\n");
      scanf("%d",&choice);
     switch(choice){
        case 1:
         create();
         break;
        case 2:
         display();
         break;
        case 3:
         display_reverse();
         break;
        case 4:
         printf("EXIT:\n");
         break;
        default:
         printf("invalid input:\n");
    }
    }
    while(choice != 4);
}

void create(){
    int n;
    char optii;
    printf("enter the element:\n");
    scanf("%d",&n);
   start = (struct node *)malloc(sizeof(struct node));
   start->l_add=NULL;
   start->data=n;
   start->r_add=NULL;
   printf("to continue further enter Y or y.\n");
   optii = getch();
   pointer = start;

   while(optii == 'y' || optii == 'Y'){
    printf("enter the element:\n");
    scanf("%d",&n);

   new_node = (struct node *)malloc(sizeof(struct node));
   
   pointer->r_add = new_node;
   new_node->l_add = pointer;
   new_node->data = n;
   new_node->r_add = NULL;
   pointer = pointer->r_add;

   printf("to continue further enter 'y' or 'Y'\n" );
   optii = getch();
   }
}

void display(){
    if(start == NULL){
        printf("linked list not found:\n");
    }
    else{
        pointer = start;
        printf("\nthe elements of the doubly linked list are as follows:\n");
        while(pointer != NULL){
            printf("%d\n",pointer->data);
            pointer = pointer->r_add;
        }
        printf("\n");
    }
}

void display_reverse(){
  if(start == NULL){
    printf("no doubly linked list found:\n");
  }
  else{
   pointer = start;
   while(pointer->r_add != NULL){
     pointer = pointer->r_add;
   } 
  printf("\nelements of the doubly linked list from backward:\n");
  while(pointer != NULL){
    printf("%d\n",pointer->data);
    pointer = pointer->l_add;
  }

  }




}
