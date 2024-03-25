//hospital management system
#include<stdio.h>
#include<malloc.h>

struct patient_record{
    int patient_id;
    char name[20];
    int age;
    char medical_condn[25];
    int appointemnt;
    struct patient_record *add;
};
struct patient_record *start = NULL,*new_node,*pointer;

void create();
void insert();
void display_whole();



void main(){
printf("----XYZ--HOSPITAL----\n");
int count=0;
int choice;
do{  
    printf("1.Manage Patient record:\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("-> MANAGING PATIENT RECORD <-\n");
        
        printf("u hv following options:\n");
        printf("1.CREATE\t2.INSERT\t3.DISPLAY WHOLE LIST\n4.EXIT\n");
        scanf("%d",choice);
        
        switch(choice){
        case 1:
        printf("creation can be done only one time as second time creation will delete whole of the previously stored data:\n");
        void create();
        count++;
        break;
        case 2:
        void insert();
        break;
        case 3:
        void display_whole();
        break;
        case 4:
        printf("exited successfully:\n");
        break;
        }

        break;
    }
}
while(choice != 4); 

}

void create(){
    int count;
do{
    char name[20],medical_condn[40],optii;
    int age,appointment;
   printf("enter the name of the patient\n");
   scanf("%s",name);
   printf("enter the age of the patient:\n");
   scanf("%d",&age);
   printf("enter the medical condition of the patient:\n");
   scanf("%s",&medical_condn);
   printf("enter the appointemt time in hrs ");
   scanf("%d",appointment);


   start = (struct patient_record *)malloc(sizeof(struct patient_record));
   
   start->name = name;    
   start->age = age;
   start->medical_condn = medical_condn;
   start->appointemnt = appointment;
   start->patient_id = new_node;
   
   start->add = NULL;
   
   printf("data entered successfully and the unique patient id of the patient is %d",new_node->patient_id = start);

   printf("to continue further enter Y or y.\n");
   optii = getch();
   pointer = start;

   while(optii == 'y' || optii == 'Y'){
     char name[20],medical_condn[40],optii;
    int age,appointment;
   printf("enter the name of the patient\n");
   scanf("%s",name);
   printf("enter the age of the patient:\n");
   scanf("%d",&age);
   printf("wnter the medical condition of the patient:\n");
   scanf("%s",&medical_condn);
   printf("enter the appointemt time in hrs ");
   scanf("%d",appointment);


   new_node = (struct patient_record *)malloc(sizeof(struct patient_record));
   
   new_node->name = name;    
   new_node->age = age;
   new_node->medical_condn = medical_condn;
   new_node->appointemnt = appointment;
   new_node->patient_id = new_node;
   
   new_node->add = NULL;
   pointer->add = new_node;
   pointer = pointer->add;
   printf("data entered successfully and the unique patient id of the patient is %d",new_node->patient_id = new_node);
   }
}
while(count == 0);

}

void insert(){
    if(start == NULL){
        printf("no database exists:\n");
    }
    else{
    char name[20],medical_condn[40],optii;
    int age,appointment;
   printf("enter the name of the patient\n");
   scanf("%s",name);
   printf("enter the age of the patient:\n");
   scanf("%d",&age);
   printf("wnter the medical condition of the patient:\n");
   scanf("%s",&medical_condn);
   printf("enter the appointemt time in hrs ");
   scanf("%d",appointment);


   new_node = (struct patient_record *)malloc(sizeof(struct patient_record));
   
   new_node->name = name;    
   new_node->age = age;
   new_node->medical_condn = medical_condn;
   new_node->appointemnt = appointment;
   new_node->patient_id = new_node;
   new_node->add = NULL;

   pointer = start;
   while(pointer->add != NULL){
   pointer = pointer->add;
   }
   pointer->add = new_node;
   printf("data entered successfully and the unique patient id of the patient is %d",new_node->patient_id = new_node);
   }
}

void display_whole(){
    if(start == NULL){
        printf("no database created:\n");
    }
    else{
        printf("WHOLE RECORD DISPLAY\n");
         pointer = start;
    printf("\npatient_id\tname\tage\tmedical_condn\tappointemnt\n");
    while(pointer != NULL){

        printf("%d\t%s\t%d\t%s\t%d",pointer->patient_id,pointer->name,pointer->age,pointer->medical_condn,pointer->appointemnt);
        printf("\n");
        pointer = pointer->add;
    }
}
}

