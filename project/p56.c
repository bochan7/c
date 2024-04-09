
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a medical staff member
struct Staff {
    int id;
    char name[50];
};

// Define a structure for a department
struct Department {
    int id;
    char name[50];
    struct Staff* head; // Pointer to the head of the department
    struct Department* next; // Pointer to the next department
};

// Create a new staff member
struct Staff* createStaff(int id, const char* name) {
    struct Staff* staff = (struct Staff*)malloc(sizeof(struct Staff));
    staff->id = id;
    strcpy(staff->name, name);
    return staff;
}

// Create a new department
struct Department* createDepartment(int id, const char* name) {
    struct Department* dept = (struct Department*)malloc(sizeof(struct Department));
    dept->id = id;
    strcpy(dept->name, name);
    dept->head = NULL;
    dept->next = NULL;
    return dept;
}

// Add a staff member to a department
void addStaffToDepartment(struct Department* dept, struct Staff* staff) {
    if (dept->head == NULL) {
        dept->head = staff;
    } else {
        // Add staff to the end of the list
        struct Staff* current = dept->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = staff;
    }
}

// Print the hierarchy
void printHierarchy(struct Department* dept) {
    printf("Department: %s\n", dept->name);
    struct Staff* current = dept->head;
    while (current != NULL) {
        printf("  Staff ID: %d, Name: %s\n", current->id, current->name);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Create departments
    struct Department* cardiology = createDepartment(1, "Cardiology");
    struct Department* neurology = createDepartment(2, "Neurology");

    // Create staff members
    struct Staff* doctor1 = createStaff(101, "Dr. Smith");
    struct Staff* doctor2 = createStaff(102, "Dr. Johnson");
    struct Staff* patient1 = createStaff(201, "John Doe");
    struct Staff* patient2 = createStaff(202, "Jane Smith");

    // Add staff to departments
    addStaffToDepartment(cardiology, doctor1);
    addStaffToDepartment(cardiology, doctor2);
    addStaffToDepartment(neurology, patient1);
    addStaffToDepartment(neurology, patient2);

    // Print the hierarchy
    printHierarchy(cardiology);
    printHierarchy(neurology);

    // Clean up memory (free allocated memory)
    free(doctor1);
    free(doctor2);
    free(patient1);
    free(patient2);
    free(cardiology);
    free(neurology);

    return 0;
}
