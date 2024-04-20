//hospital management system for various operations 

#include<stdio.h>     //including Header files 
#include<malloc.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
                      
struct patient_record{       // declaring various structures to be used and their data fileds
    int patient_id;
    char name[20];
    int age;
    char medical_condn[100];
    int appointment;
    struct patient_record *add;
};
struct patient_record *start = NULL,*new_node,*pointer,*pre_pointer,*pos_pointer;

struct patient_appointment{
    int patient_id;
    char  name[20];
    char doc_name[100];
    int time;
    int *add;
};
struct patient_appointment *starrt = NULL,*neww_node,*pointerr;

typedef struct TreeNode {
    char name[100];
    char role[20]; // "Doctor" or "Patient"
    char department[50];
    struct TreeNode *firstChild;
    struct TreeNode *nextSibling;
} TreeNode;


void insert();               //declaring various functions 
void display_whole();
void delete();

void allot_doc();
void view_appoint_details();
void mod_appoint_details();

// Function to create a new node

TreeNode* createNode(const char *name, const char *role, const char *department) {
    TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
    strcpy(newNode->name, name);
    strcpy(newNode->role, role);
    strcpy(newNode->department, department);
    newNode->firstChild = NULL;
    newNode->nextSibling = NULL;
    return newNode;
}

// Function to add a child node

void addChild(TreeNode *parent, TreeNode *child) {
    if (parent->firstChild == NULL) {
        parent->firstChild = child;
    } else {
        TreeNode *temp = parent->firstChild;
        while (temp->nextSibling != NULL) {
            temp = temp->nextSibling;
        }
        temp->nextSibling = child;
    }
}

// Function to print the tree

void printTree(TreeNode *root, int level) {
    if (root == NULL) return;
    for (int i = 0; i < level; i++) printf("   ");
    printf("%s (%s - %s)\n", root->name, root->role, root->department);
    printTree(root->firstChild, level + 1);
    printTree(root->nextSibling, level);
}

//menu driven 

int main(){
printf("----XYZ--HOSPITAL----\n");

srand(time(NULL)); // seeding the random function with respect to time to generate unique patient id later

int choice,choice1,choice2;
do{  
    printf("\n1.Manage Patient record:\t2.Manage Patient appointment:\t3.Showcase Doctor Patient relationship:\t4.EXIT\n");
    scanf("%d",&choice);
                              //taking input    
    switch(choice){
        case 1:
        printf("-> MANAGING PATIENT RECORD <-\n");
        printf("u hv following options:\n");
        printf("1.INSERT\t2.DISPLAY WHOLE LIST\t3.delete a record\t4.EXIT\n");
        scanf("%d",&choice1);
        if(choice1 == 1){
             insert();
            
        }
        else if(choice1 == 2){
            display_whole();
            
        }
        else if(choice1 == 3){
             delete();
            
        }
        else if(choice1 == 4){
         printf("exited\n");
        }
        else{
            printf("invalid input:\n");
        }
     
     break;
       case 2:
       printf("-> MANAGING PATIENT APPOINTMENT <-\n");
       printf("u hv following options:\n");
       printf("1.Allot a doctor\t2.View appointment details\t3.Modity appointment time\t4.EXIT\n");
       scanf("%d",&choice2);
       if(choice2 == 1){
         allot_doc();

       }
       else if(choice2 == 2){
         view_appoint_details();
       }
       else if( choice2 == 3){
         mod_appoint_details();
       }
       else if(choice2 == 4){
         printf("exited");
        }
       else{
        printf("invalid input\n");
       }
       //making patient doctor relationship record 
       break;
       case 3:
         // Create root node for the hospital
       TreeNode *hospital = createNode("XYZ HOSPITAL", "Hospital", "Patient-doctor-record");
   
   
       // Add departments
       TreeNode *cardiology = createNode("Cardiology", "Department", "-x-x-");
       TreeNode *neurology = createNode("Neurology", "Department", "-x-x-");
       TreeNode *Psychiatry = createNode("Psychiatry","Department","-x-x-");
       addChild(hospital, cardiology);
       addChild(hospital, neurology);
       addChild(hospital,Psychiatry);
       // Add doctors to their respective departments
       TreeNode *drRamesh = createNode("Dr. Ramesh", "Doctor", "Cardiology");
       TreeNode *drSuresh = createNode("Dr. Suresh", "Doctor", "Neurology");
       TreeNode *drAditya = createNode("Dr. Aditya","DOCTOR","Pscyhiatry");
       addChild(cardiology, drRamesh);
       addChild(neurology, drSuresh);
       addChild(Psychiatry,drAditya);

    // Add patients to diifn doctors
        TreeNode *patient1 = createNode("kilo", "Patient", "Cardiology");
        TreeNode *patient2 = createNode("mike", "Patient", "neurology");
        TreeNode *patient3 = createNode("charlie","patient","pscyhiatry");
        TreeNode *patient4 = createNode("alpha", "Patient", "Cardiology");
        TreeNode *patient5 = createNode("romeo", "Patient", "pscyhiatry");
        addChild(drRamesh, patient1);
        addChild(drRamesh, patient4);
        addChild(drSuresh, patient2);
        addChild(drAditya, patient3);
        addChild(drAditya,patient5);
        // Print the tree
        printTree(hospital, 0); 
        
      break;
    case 4:
     printf("exiting:\n");
    }
    }
    
while(choice != 4); 

}

void insert(){
    int patient_id,appointment,age;
    char name[20],medical_condn[100],optii;

    patient_id = rand();  //to make unique patient id using rand function 

   printf("enter the name of the patient\n");
   scanf("%19s", name);
   fflush(stdin);
   printf("enter the age of the patient:\n");
   scanf("%d", &age);
   printf("enter the medical condition of the patient:\n");
   scanf("%99s", medical_condn);
   fflush(stdin);
   printf("enter the appointemt time in hrs ");
   scanf("%d", &appointment);
   

    if(start == NULL){

     start = (struct patient_record*)malloc(sizeof(struct patient_record));
 
     strcpy(start->name,name);    
     start->age = age;
     strcpy(start->medical_condn,medical_condn);
     start->appointment = appointment;
     start->patient_id = patient_id;
   
     start->add = NULL;

     pointer = start;
     printf("\nrecord entered successfully:\n");
     printf("unique patient id generated is %d\n",start->patient_id);
    }

    else{ 
        new_node = (struct patient_record *)malloc(sizeof(struct patient_record));
        strcpy(new_node->name,name);    
        new_node->age = age;
        strcpy(new_node->medical_condn,medical_condn);
        new_node->appointment = appointment;
        new_node->patient_id = patient_id;

        new_node->add = NULL;
        pointer = start;

        while(pointer->add != NULL){
        pointer = pointer->add;
       }

        pointer->add = new_node;

        printf("\ndata entered successsfully\n");
        printf("unique patient id generated is %d\n",new_node->patient_id);
        
 }

}

void display_whole(){
 if(start == NULL){
    printf("no datbase exists to show:\n");
 }
 else{
  printf("\n----PATIENT--RECORDS----\n");
 
  pointer = start;
  int i=1;
  do{
    printf("Patient number %d\n",i);
    printf("Patient_id:%d\n",pointer->patient_id);
    printf("Patient_name %s\n",pointer->name);
    printf("age:%d\n",pointer->age);
    printf("medical condition: %s\n",pointer->medical_condn);
    printf("appointment time(in hrs) = %d",pointer->appointment);
    printf("\n");
    printf("\n");
     i++;
     pointer = pointer->add;
  }
  while(pointer != NULL);

 }
 
}

void delete(){
 if(start == NULL){
    printf("no record found:\n");
 }
 int n,count =0 ;
 printf("enter the patient id of the patient to delete the record:\n");
 scanf("%d",&n);
 pointer = start;

if(n == start->patient_id){
  pos_pointer = pointer->add;
  start = pos_pointer;
  printf("information of patient %s with patient id %d is now deleted:\n",pointer->name,pointer->patient_id);
  free(pointer);
  count++;
}

else{
 pointer = start;
 pre_pointer = start;
 while (pointer != NULL)
 {   
     if(pointer->patient_id == n){
      printf("information of patient %s with patient id %d is now deleted:\n",pointer->name,pointer->patient_id);
      
      pre_pointer->add = pointer->add;
    
      free(pointer);
      count++;
      break;
     }
     else{
     pre_pointer = pointer;
     pointer = pointer->add;
     }
 }

if(count == 0){
    printf("information of patient not found:\n");
}
 
}

}

void allot_doc(){
int q;
printf("enter the patient id of the patient\n");
scanf("%d",&q);
pointer = start;
int countt=0;
while (pointer != NULL)
{ 
    if(pointer->patient_id == q){
    printf("patient found:\n");
     if(starrt == NULL){
        starrt = (struct patient_appointment *)malloc(sizeof(struct patient_appointment));
        strcpy(starrt->name,pointer->name);
        starrt->patient_id = pointer->patient_id;
        starrt->time = pointer->appointment;
        char doc[30];
        printf("enter the name of the doctor:\n");
        scanf("%19s", doc);
        fflush(stdin);
        strcpy(starrt->doc_name,doc);
        starrt->add = NULL;
        pointerr = starrt;
        printf("appointment of patient %s with doc %s is succesfully scheduled for %d",starrt->name,starrt->doc_name,starrt->time);
      countt++;
     }
     else{
        neww_node = (struct patient_appointment *)malloc(sizeof(struct patient_appointment));
        strcpy(neww_node->name,pointer->name);
        neww_node->patient_id = pointer->patient_id;
        neww_node->time = pointer->appointment;
        char doc[30];
        printf("enter the name of the doctor:\n");
        scanf("%19s", doc);
        fflush(stdin);
        strcpy(neww_node->doc_name,doc);
        pointerr = starrt;
        while(pointerr->add != NULL){
        pointerr = pointerr->add;
        }
        pointerr->add = neww_node;
        printf("appointment of patient %s with doc %s is succesfully scheduled for %d",neww_node->name,neww_node->doc_name,neww_node->time);
       countt++;
     }
}
   pointer = pointer->add;

    
}
if(countt == 0){
    printf("data not found:\n");
}
}

void view_appoint_details(){
    int w,num=0;
    if(starrt == NULL){
        printf("no database exits\n");
    }
    else{
        printf("enter the unique patient id of the patient:\n");
        scanf("%d",&w);
       pointerr = starrt;
       while(pointerr != NULL){
        if(pointerr->patient_id == w){
            printf("--details--found--\n");
            printf("patient name = %s\n",pointerr->name);
            printf("appointment with doctor : %s\n",pointerr->doc_name);
            printf("time:%d\n",pointerr->time);
            num++;
            break;
        }
        else{
            pointerr = pointerr->add;
        }
       }
       if(num==0){
        printf("no data found:\n");
       }
    }
}

void mod_appoint_details(){
    int e,couunt=0;
 if(starrt == NULL){
    printf("no database exists\n");
 }
 else{
    printf("enter the unique patient id of the patient to modify his appointment time:\n");
    scanf("%d",&e);
    int tym;
    pointer = start;
       while(pointer != NULL){
        if(pointer->patient_id == e){
            printf("enter new appointment time:\n");
            scanf("%d",&tym);
            pointer->appointment = tym;
            printf("appointment time successfully modified\n");
            couunt++;
            break;
        }
        else{
            pointer = pointer->add;
        }
       }
       if(couunt==0){
        printf("patient id not found:\n");
       }
    }
}
 
 