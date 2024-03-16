//we make doubly circular linked list to improve the time complexity of the doubly circular list

#include<stdio.h>
#include<malloc.h>

struct node{
    struct node *l_add;
    int data;
    struct node *r_add;
};
struct node *start = NULL,*pointer,*pre_pointer,*pos_pointer,*new_node;

void create();
void display();
void rev_display();
void count_node();
void insert_first();
void insert_last();
void insert_middle();
void del_first();
void del_last();
void del_middle();


void main(){
    int choice;
 printf("\n----CIRCULAR--DOUBLY--LINKED--LIST----\n");
 do{
 printf("(u have the following opreations to perform)\n");
 printf("1.CREATE\t2.DISPLAY\t3.DISPLAY FROM BACK OR REVERSE TRAVERSING\t4.COUNT THE NUMBER OF NODES\n");
 printf("5.INSERT A NODE AT THE FIRSt posiTION\t6.INSERT A NODE AT THE LAST\t7.INSERT A NODE AT THE MIDDLE\n");
 printf("8.DELETE THE FIRST NODE\t9.DELETE THE LAST NODE\t10.EXIT\n");
 scanf("%d",&choice);
 
 switch(choice){
    case 1:
     create();
     break;
    case 2:
     display();
     break;
    case 3:
     rev_display();
     break;
    case 4:
     count_node();
     break;
    case 5:
     insert_first();
     break;
    case 6:
     insert_last();
     break;
    case 7:
     insert_middle();
     break;
    case 8:
     del_first();
     break;
    case 9:
     del_last();
     break;
    case 10:
     del_middle();
     break;
    case 11:
     printf("EXITED:\n");
     break;
    default:
     printf("invalid input:\n");
 }
 }
 while(choice!= 11);
}

void create(){
    int n;
    printf("enter the element:\n");
    scanf("%d",&n);
    
    new_node =(struct node *) malloc(sizeof(struct node));
    new_node->l_add = NULL;
    new_node->data = n;
    new_node->r_add = NULL;
    start = new_node;
    char opshii;
    printf("do u want to continue??\n");
    printf("enter 'y' or 'Y' to continue:\n");
    opshii = getch();
    pointer = start;
    while(opshii == 'Y' || opshii == 'y'){
        printf("enter the element:\n");
        scanf("%d",&n);

        new_node = (struct node *)malloc(sizeof(struct node));

        new_node->l_add = NULL;
        new_node->data = n;
        new_node->r_add = NULL;
        
        pointer->r_add = new_node;
        new_node->l_add = pointer;
        pointer = pointer->r_add;
        pointer->r_add = start;
        start->l_add = pointer;
       
       printf("do u want to continue?\n");
       opshii = getch();
    }
}

void display(){
    if(start == NULL){
        printf("no doubly circular linked list exists:\n");
    }
    else{
        printf("\n the elements of the circular doubly linked list\n");
        pointer =start;
        do{
            printf("%d\n",pointer->data);
            pointer = pointer->r_add;
        }
        while(pointer != start);
    }
}

void rev_display(){
    if(start == NULL){
        printf("no doubly circular linked list found:\n");
    }
    else{
   pointer=start;
   pointer = pointer->l_add;
   printf("\n----REVERSE--TRAVERSING----\n");
   do{
    printf("%d\n",pointer->data);
    pointer = pointer->l_add;
   }
   while(pointer != start->l_add);
   }
}

void count_node(){
    if(start == NULL){
        printf("no doubly circular linked list found:\n");
    }
    else{
        int count = 0;
        pointer = start;
        do{
            count++;
            pointer = pointer->r_add;          
        }
        while(pointer != start);
        printf("the number of nodes in this doubly circular linked list are %d\n",count);
    }
}

void insert_first(){
    if(start == NULL){
        printf("no doubly circular linked list found\n");
    }
    else{
        int n;
        printf("enter the element:\n");
        scanf("%d",&n);

        new_node = (struct node *)malloc(sizeof(struct node));

        new_node->l_add=NULL;
        new_node->data=n;
        new_node->r_add=NULL;

        pointer = start;
        pointer = pointer->l_add;

        new_node->r_add = start;
        start->l_add = new_node;

        start = new_node;

        start->l_add=pointer;
        pointer->r_add = start;

    }
}

void insert_last(){
    if(start == NULL){
        printf("no doubly circular linked list found:\n");
    }
    else{
        int n;
        printf("enter the element to insert at the last position:\n");
        scanf("%d",&n);

        new_node =(struct node *) malloc(sizeof(struct node));
        new_node->l_add = NULL;
        new_node->data = n;
        new_node->r_add =NULL;

        pointer = start;
        pointer = pointer->l_add;
        
        pointer->r_add = new_node;
        new_node->l_add = pointer;
        new_node->r_add=start;
        start->l_add = new_node;
    }

}

void insert_middle(){
    if(start == NULL){
        printf("no doubly circular linked list list exists:\n");
    }
    else{
        int n,pos,count= 1;
        printf("enter the element to insert:\n");
        scanf("%d",&n);
        printf("Enter the position at which u wanna insert the element:\n");
        pointer = start;
        do{
            count++;
            pointer = pointer->r_add;
        }
        while(pointer !=  start);

        printf("total available position are %d\n",count);
        scanf("%d",&pos);

         if(pos > count){
            printf("this position do not exist:\n");
         }
         else{
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->l_add = NULL;
            new_node->data = n;
            new_node->r_add = NULL;

            pointer = start;
            int i=0;
            while(i<pos){
                pre_pointer = pointer;
                pointer = pointer->r_add;
                i++;
            }
            pre_pointer->r_add = new_node;
            new_node->l_add = pre_pointer;
            pointer->l_add = new_node;
            new_node->r_add = pointer;
         }
    }
}

void del_first(){
 if(start == NULL){
    printf("no doubly circular linked list found:\n");
 }
 else{
   pointer = start;
   pre_pointer = start;
   pre_pointer = start->l_add;
   start = start->r_add;
   pre_pointer->r_add = start;
   start->l_add = pre_pointer;
   printf("deleted node is %d\n",pointer->data);
   free(pointer);
 }
}

void del_last(){
    if(start == NULL){
        printf("no doubly circular linked list found:\n");
    }
    else{
    pointer = start;
    pointer = start->l_add;
    pre_pointer = pointer->l_add;
    pre_pointer->r_add = start;
    start->l_add = pre_pointer;
    printf("deleted node is %d",pointer->data);
    free(pointer);
    }
}

void del_middle(){
    if(start == NULL){
        printf("no doubly circular linked list found:\n");
    }
    else{
        int pos,count=0;
        printf("enter the position from where u wanna delete the node:\n");
        pointer = start;
        do{
            count++;
            pointer = pointer->r_add;
        }
        while( pointer != start);
     printf("it should be less than %d",count);
     scanf("%d",&pos);
    if(pos > count){
        printf("position not available:\n");
    }
    else{
    pointer = start;
    int i=1;
    while(i < pos){
        pre_pointer = pointer;
        pointer = pointer->r_add;
        pos_pointer = pointer->r_add;
    }
    pos_pointer->l_add = pos_pointer;
    pos_pointer->l_add = pre_pointer;
    printf("deleted node from %d position is %d",count,pointer->data);
    free(pointer);
  }
 }
}