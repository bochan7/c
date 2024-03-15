#include<stdio.h>
#include<malloc.h>

struct node{     //creating strucutre for node
    int data;
    struct node *add;
};
struct node *start = NULL,*pointer,*new_node,*pre_pointer;

//declaring functions

void create();
void display();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();
void count_node();
void search();
void sort();


void main(){
    int choice;
    printf("\n");
    printf("----linked--list----\n");
    do{
     printf("\nyou have following operations to perform:\n");
     printf("1.insert\t2.display\t3.insert a element at the first\t4.insert the element at last\t5.insert the element at the middle\n");
     printf("6.delete the first element\t7.delete the last element\t8.delete the middle element\t9.count the number of node\n");
     printf("10.search a element\t11.sort the elements of the linked list\t12.exit");
     printf("\nenter ur choice:\n");
     scanf("%d",&choice);
     switch(choice){
        case 1:
         create();
         break;
        case 2:
         display();
         break;
        case 3:
         insert_first();
         break;
        case 4:
         insert_last();
         break;
        case 5:
         insert_middle();
         break;
        case 6:
         delete_first();
         break;
        case 7:
         delete_last();
         break;
        case 8:
         delete_middle();
         break;
        case 9:
         count_node();
         break;
        case 10:
         search();
         break;
        case 11:
         sort();
         break;
        case 12:
         printf("EXIT:\n");
         break;
        default:
         printf("invalid input:\n");
     }
    }
    while(choice !=12);
}

void create(){
    int n;
    printf("enter the element:\n");
    scanf("%d",&n);
    start = (struct node *)malloc(sizeof(struct node));
    start->data=n;
    start->add=NULL;
   pointer = start;
   char opshi;
    printf("do u want to continue with this operation ??\n");
    opshi = getch();
    while(opshi == 'Y' || opshi == 'y'){
        printf("enter the number:\n");
        scanf("%d",&n);
        new_node = (struct node *)malloc(sizeof(struct node)); //allocation for new node
        new_node->data = n;    //here our data is stored in new node
        new_node->add = NULL;  //here address portion of our new node is been set to null
    
    pointer->add = new_node; //pointer which is at start now will store the address of the new node in that start 
    pointer =pointer->add; //n we will be shifting pointer to the new node in this way we will be able to store the address of new nod in previous node
    
    printf("do u want to continue with this operation ??\n");
    opshi = getch();
    }
}

void display(){
    if(start == NULL){
        printf("linked list empty now");
    }
   else{
    pointer = start;
    while(pointer != NULL){
        
        printf("%d\n",pointer->data);
        pointer=pointer->add;
    }
    }
}

void insert_first(){
    if(start == NULL){
        printf("there is no linked list created:\n");
    }
    else{
        int n;
        printf("enter the element to insert at first place:\n");
        scanf("%d",&n);
        new_node = (struct node *) malloc(sizeof(struct node));
        new_node->data = n;
        new_node->add=NULL;
        new_node->add=start;
        start = new_node;
    }
}

void insert_last(){
    if(start == NULL){
        printf("no linked list is there:\n");
    }
    else{
        int n;
        printf("enter the element to insert at last:\n");
        scanf("%d",&n);
        new_node=(struct node *)(malloc(sizeof(struct node)));
        new_node->data=n;
        new_node->add=NULL;
        pointer = start;
        while(pointer->add != NULL){
            pointer = pointer->add;
        }
        pointer->add=new_node;
    }
}

void insert_middle(){
    if(start == NULL){
        printf("linked list not found:\n");
    }
    else{
     int n,count = 0,pos,i=1;
     pointer = start;
     while(pointer->add != NULL){
        count++;
        pointer = pointer->add;
     }
     printf("enter the element to insert in middle of the linked list:\n");
     scanf("%d",&n);
     printf("enter the position to insert(it shld be less than %d)\n",count);
     scanf("%d",&pos);
     if(pos > count){
        printf("position is not in the linked list to insert:\n");
     }
     else{
        new_node=( struct node *)(malloc(sizeof(struct node)));
        new_node->data=n;
        new_node->add=NULL;
        pointer = start;
      while(i<pos){
       pre_pointer=pointer;
       pointer = pointer->add;
       i++;
      }
      pre_pointer->add=new_node;
      new_node->add=pointer;
     }
    }
}

void delete_first(){
    if(start == NULL){
        printf("no linked list found:\n");
    }
    else{
        pointer = start;
        start = start->add;
        printf("deleted element is %d",pointer->data);
        free(pointer);
    }
}

void delete_last(){
    if(start == NULL){
        printf("no link list founded\n");
    }
    else{
      pointer = start;
      while(pointer->add != NULL){
        pre_pointer = pointer;
        pointer = pointer->add;
      }
      pre_pointer->add = NULL;
    printf("deleted element is %d",pointer->data);
      free(pointer);

    }
}

void delete_middle(){
    if(start == NULL){
        printf("linked list not found:\n");
    }
    else{
        int count = 0,pos,i=1;
        pointer = start;
        while(pointer->add != NULL){
            pointer = pointer->add;
            count++;
        }
        printf("enter the position to delete:(it shld be less than %d)\n",count);
        scanf("%d",&pos);
        if(pos > count){
            printf("error !! position not found:\n");
        }
        else{
          pointer = start;
         while(i<pos){
           pre_pointer = pointer;
           pointer = pointer->add;
           i++;
         }
        pre_pointer->add = pointer->add;
        printf("deleted element fron position %d is %d",pos,pointer->data);
        free(pointer);
        }

    }
}

void count_node(){
    if(start == NULL){
        printf("no linked list found:\n");
    }
    else{
        int count = 0;
        pointer = start;
        while(pointer != NULL){
            count++;
            pointer=pointer->add;
        }
       printf("total number of nodes in the linled list are %d\n",count);
    }
}

void search(){
    if(start == NULL){
        printf("no linked list found:\n");
    }
    else{
        int x,count = 0,pos =1;
        printf("enter the element to search\n");
        scanf("%d",&x);
        pointer = start;
        while(pointer != NULL){
            if(pointer->data == x){
                count++;
                break;
            }
            else{
                pointer = pointer->add;
                pos++;

            }
        }
        if(count != 0){
            printf("element found at %d position",pos);
        }
        else{
            printf("element not found:\n");
        }
    }
}

void sort(){
    if(start == NULL){
        printf("no linked list found:\n");
    }
    else{
      int temp;
      pre_pointer = start;
      while(pre_pointer != NULL){
        pointer = pre_pointer->add;
        while(pointer != NULL){
         if(pre_pointer->data > pointer->data){
            temp = pre_pointer->data;
            pre_pointer->data = pointer->data;
            pointer->data = temp;
         }
         pointer = pointer->add;
        }
        pre_pointer = pre_pointer->add;
      }
    printf("\n the linked list now has been sorted successfully:\n");

   }
}
