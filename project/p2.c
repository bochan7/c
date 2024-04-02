#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct patient_record {
int patient_id;
char name[20];
int age;
char medical_condn[25];
int appointemnt;
struct patient_record *add;
};

struct patient_record *start = NULL, *new_node, *pointer;

void create();
void insert();
void display_whole();

int main() {
printf("----XYZ--HOSPITAL----\n");
int choice;
do {
printf("1. Manage Patient record:\n");
scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("-> MANAGING PATIENT RECORD <-\n");

            printf("You have the following options:\n");
            printf("1. CREATE\t2. INSERT\t3. DISPLAY WHOLE LIST\n4. EXIT\n");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Creation can be done only one time as second time creation will delete whole of the previously stored data:\n");
                    create();
                    break;
                case 2:
                    insert();
                    break;
                case 3:
                    display_whole();
                    break;
                case 4:
                    printf("Exited successfully:\n");
                    break;
            }
            break;
    }
} while (choice != 4);

return 0;
}

void create() {
char optii;
int count = 0;

do {
    char name[20], medical_condn[40];
    int age, appointment;

    printf("Enter the name of the patient: ");
    scanf("%s", name);
    printf("Enter the age of the patient: ");
    scanf("%d", &age);
    printf("Enter the medical condition of the patient: ");
    scanf("%s", medical_condn);
    printf("Enter the appointment time in hrs: ");
    scanf("%d", &appointment);

    new_node = (struct patient_record *)malloc(sizeof(struct patient_record));

    strcpy(new_node->name, name);
    new_node->age = age;
    strcpy(new_node->medical_condn, medical_condn);
    new_node->appointemnt = appointment;
    new_node->patient_id = new_node;

    new_node->add = NULL;

    printf("Data entered successfully and the unique patient id of the patient is %d\n", new_node->patient_id);

    printf("To continue further enter Y or y: ");
    scanf(" %c", &optii); // Note the space before %c to consume the newline character

    if (optii == 'y' || optii == 'Y') {
        if (start == NULL)
            start = new_node;
        else {
            pointer->add = new_node;
        }
        pointer = new_node;
    }

    count++;
} while (optii == 'y' || optii == 'Y');
}

void insert() {
if (start == NULL) {
printf("No database exists.\n");
} else {
char name[20], medical_condn[40];
int age, appointment;

    printf("Enter the name of the patient: ");
    scanf("%s", name);
    printf("Enter the age of the patient: ");
    scanf("%d", &age);
    printf("Enter the medical condition of the patient: ");
    scanf("%s", medical_condn);
    printf("Enter the appointment time in hrs: ");
    scanf("%d", &appointment);

    new_node = (struct patient_record *)malloc(sizeof(struct patient_record));

    strcpy(new_node->name, name);
    new_node->age = age;
    strcpy(new_node->medical_condn, medical_condn);
    new_node->appointemnt = appointment;
    new_node->patient_id = new_node;
    new_node->add = NULL;

    pointer = start;
    while (pointer->add != NULL) {
        pointer = pointer->add;
    }
    pointer->add = new_node;

    printf("Data entered successfully and the unique patient id of the patient is %d\n", new_node->patient_id);
}
}

void display_whole() {
if (start == NULL) {
printf("No database created.\n");
} else {
printf("WHOLE RECORD DISPLAY\n");
pointer = start;
printf("\npatient_id\tname\tage\tmedical_condn\tappointemnt\n");
while (pointer != NULL) {
printf("%d\t%s\t%d\t%s\t%d\n", pointer->patient_id, pointer->name, pointer->age, pointer->medical_condn, pointer->appointemnt);
pointer = pointer->add;
}
}
}