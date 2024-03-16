#include<stdio.h>
#include<malloc.h>

struct node{
    struct node *l_add;
    int data;
    struct node *r_add;
};
struct node *start = NULL,*pointer,*new_node,*pre_pointer,*post_pointer;

void create();
void display();
void display_reverse();
void insert_first();
void insert_last();
void insert_middle();
void del_first();
void del_last();
void del_middle();

void main(){
    int choice;
    printf("\n----DOUBLY--LINKED--LISt\n");
    do{
      printf("(you have following options:)\n");
      printf("1.CREATE\t2.DISPLAY\t3.DISPLAY ELEMENTS FROM BACK\t4.INSERT AN ELEMENT AT FIRST\n");
      printf("5.INSERT AN ELEMENT AT THE LAST OF LINKED LIST\t6.INSERT AN ELEMENT IN THE MIDDLE OF THE LIST\n");
      printf("7.DELTE THE FIRST NODE\t8.DELETE THE LAST NODE\t9.DELETE A NODE FROM MIDDLE\t10.EXIT\n");
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
         insert_first();
         break;
        case 5:
         insert_last();
         break;
        case 6:
         insert_middle();
         break;
        case 7:
         del_first();
         break;
        case 8:
         del_last();
         break;
        case 9:
         del_middle();
         break;
        case 10:
         printf("EXIT:\n");
         break;
        default:
         printf("invalid input:\n");
    }
    }
    while(choice != 10);
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

void insert_first(){
 if(start == NULL){
    printf("there is no doubly linked list:\n");
 } 
 else{
    int n;
    printf("enter the element to insert at first:\n");
    scanf("%d",&n);

    new_node=(struct node *) malloc(sizeof(struct node));
    new_node->l_add = NULL;
    new_node->data = n;
    new_node->r_add = NULL;

    start->l_add = new_node;
    new_node->r_add = start;
    start = start->l_add;
 }

}

void insert_last(){
    if(start == NULL){
        printf("doubly linked list do not exist:\n");
    }
    else{
    int n;
    printf("enter the element to insert at the last of the linked list:\n");
    scanf("%d",&n);

    new_node=( struct node *) malloc(sizeof(struct node));
    
    new_node->l_add = NULL;
    new_node->data = n;
    new_node->r_add = NULL;

    pointer = start;

    while(pointer->r_add != NULL){
        pointer = pointer->r_add;
    }
    pointer->r_add = new_node;
    new_node->l_add = pointer;


    }
}

void insert_middle(){
if(start == NULL){
    printf("linked list not found:\n");
}
else{
    int n,pos,count = 1;
    printf("enter the element to insert:\n");
    scanf("%d",&n);
    pointer = start;
    while(pointer != NULL){
        count++;
        pointer = pointer->r_add;
    }
    printf("enter the position from front where u wanna insert the element:\n");
    printf("it should be less than %d\n",count);
    scanf("%d",&pos);
    if(pos > count){
        printf("no such position exists in the list fool :\n");
    }
    else{
       new_node = (struct node *)malloc(sizeof(struct node));
       new_node->l_add = NULL;
       new_node->data = n;
       new_node->r_add = NULL;
       pre_pointer = start;
       pointer = start->r_add;
       int i=1;
       while(i<pos){
        pre_pointer = pointer;
        pointer = pointer->r_add;
        i++;        
       }
       pre_pointer->r_add = new_node;
       new_node->l_add=pre_pointer;
       new_node->r_add=pointer;
       pointer->l_add=new_node;
    }
  }
}

void del_first(){
    if(start == NULL){
        printf("doubly linked list do not exist:\n");
    }
    else{
      pointer = start;
      start = start->r_add;
      start->l_add = NULL;
      printf("\ndeleted node is %d\n",pointer->data);
      free(pointer);
    }
}

void del_last(){
 if(start == NULL){
    printf("no linked list exists:\n");
 }
 else{
 pointer = start;
 while(pointer->r_add != NULL){
    pre_pointer = pointer;
    pointer = pointer->r_add;
 } 
 pre_pointer->r_add = NULL;
 printf("\ndeleted node is %d\n",pointer->data);
 free(pointer);
 }
}

void del_middle(){
    if(start == NULL){
        printf("linked list do not exist:\n");
    }
    else{
        int pos,count = 1;
        printf("enter the position to delete:\n");
        pointer = start;
        while(pointer->r_add != NULL){
            count++;
            pointer = pointer->r_add;
        }
        printf("it should be less than %d\n",count);
        scanf("%d",&pos);
        if(pos > count){
            printf("no such position exists fool:\n");
        }
        else{
        int i = 1;
        pointer = start;
        while(i<pos){
             pre_pointer=pointer;
             pointer = pointer->r_add;
             post_pointer = pointer->r_add;
             i++;
             
        }
       pre_pointer->r_add = post_pointer;
       post_pointer->l_add = pre_pointer;
       printf("\ndeleted node is %d\n",pointer->data);
       free(pointer);
     }
    }
}

