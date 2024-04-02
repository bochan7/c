//hospital management system
#include<stdio.h>
#include<malloc.h>

struct patient_record{
    int patient_id;
    char name;
    int age;
    char medical_condn;
    int appointment;
    struct patient_record *add;
};
struct patient_record *start = NULL,*new_node,*pointer;

void insert();
void display_whole();
void delete();



void main(){
printf("----XYZ--HOSPITAL----\n");

int choice,choice1;
do{  
    printf("1.Manage Patient record:\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("-> MANAGING PATIENT RECORD <-\n");
        printf("u hv following options:\n");
        printf("1.INSERT\t2.DISPLAY WHOLE LIST\t3.delete a record\t4.EXIT\n");
        scanf("%d",&choice1);
        if(choice1 == 1){
            void insert();
        }
        if(choice1 == 2){
            void display_whole();
        }
        if(choice1 == 3){
            void delete();
        }
        if(choice1 == 4){
         printf("exited");
        }
        else{
            printf("invalid input:\n");
        }
     
     break;

        }
    }

while(choice != 4); 

}

void insert(){
    int pattient_id,appointment,age;
    char name,medical_condn,optii;
printf("enter the name of the patient\n");
   scanf("%s",name);
   printf("enter the age of the patient:\n");
   scanf("%d",&age);
   printf("enter the medical condition of the patient:\n");
   scanf("%s",&medical_condn);
   printf("enter the appointemt time in hrs ");
   scanf("%d",appointment);
   printf("enter the patient id:\n");
   scanf("%d",&pattient_id);

    if(start == NULL){

     start = (struct patient_record*)malloc(sizeof(struct patient_record));
 
     start->name = name;    
     start->age = age;
     start->medical_condn = medical_condn;
     start->appointment = appointment;
     start->patient_id = pattient_id;
   
     start->add = NULL;

     pointer = start;
     printf("record entered successfully:\n");
    }

    else{ 
        new_node = (struct patient_record *)malloc(sizeof(struct patient_record));
        new_node->name = name;    
        new_node->age = age;
        new_node->medical_condn = medical_condn;
        new_node->appointment = appointment;
        new_node->patient_id = pattient_id;

        new_node->add = NULL;
        pointer = start;

        while(pointer->add != NULL){
        pointer = pointer->add;
       }

        pointer->add = new_node;

        printf("data entered successsfully");
        
 }

}

