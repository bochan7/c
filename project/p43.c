#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for Tree Node
typedef struct TreeNode {
    char name[100];
    char role[20]; // "Doctor" or "Patient"
    char department[50];
    struct TreeNode *firstChild;
    struct TreeNode *nextSibling;
} TreeNode;

TreeNode* createNode(const char *name, const char *role, const char *department) {
    TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    strcpy(newNode->name, name);
    strcpy(newNode->role, role);
    strcpy(newNode->department, department);
    newNode->firstChild = NULL;
    newNode->nextSibling = NULL;
    return newNode;
}

// Function to add a child node
void addChild(TreeNode *parent, TreeNode *child) {
    if (parent != NULL && child != NULL) {
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
}

// Function to print the tree
void printTree(TreeNode *root, int level) {
    if (root == NULL) return;
    for (int i = 0; i < level; i++) printf("   ");
    printf("%s (%s - %s)\n", root->name, root->role, root->department);
    if (root->firstChild != NULL) {
        printTree(root->firstChild, level + 1);
    }
    if (root->nextSibling != NULL) {
        printTree(root->nextSibling, level);
    }
}

// Function to get input from the user
void getUserInput(char *name, char *role, char *department) {
    printf("Enter name: ");
    scanf(" %[^\n]%*c", name); // Read a line of text
    while ((getchar()) != '\n'); 
    printf("Enter role (Doctor/Patient): ");
    scanf(" %[^\n]%*c", role);
    while ((getchar()) != '\n'); 
    printf("Enter department: ");
    scanf(" %[^\n]%*c", department);
    while ((getchar()) != '\n'); 
}

// Function to free the memory allocated for the tree
void freeTree(TreeNode *root) {
    if (root == NULL) return;
    freeTree(root->firstChild);
    freeTree(root->nextSibling);
    free(root);
}




// Function prototypes
TreeNode* createNode(const char *name, const char *role, const char *department);
void addChild(TreeNode *parent, TreeNode *child);
void printTree(TreeNode *root, int level);
void getUserInput(char *name, char *role, char *department);
void freeTree(TreeNode *root);

int main() {
    int choice;
    TreeNode *root = NULL;
    TreeNode *currentDepartment = NULL;
    TreeNode *currentDoctor = NULL;

    while(1) {
        printf("\nMenu:\n");
        printf("1. Add Department\n");
        printf("2. Add Doctor\n");
        printf("3. Add Patient\n");
        printf("4. Print Structure\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        getchar(); // Consume the newline character

        char name[100], role[20], department[50];

        switch(choice) {
            case 1:
                printf("\nEnter the details for a department:\n");
                getUserInput(name, "Department", "N/A");
                TreeNode *newDepartment = createNode(name, "Department", "N/A");
                if(root == NULL) {
                    root = newDepartment;
                } else {
                    addChild(root, newDepartment);
                }
                currentDepartment = newDepartment;
                break;
            case 2:
                if(currentDepartment != NULL) {
                    printf("\nEnter the details for a doctor in the department:\n");
                    getUserInput(name, "Doctor", currentDepartment->name);
                    currentDoctor = createNode(name, "Doctor", currentDepartment->name);
                    addChild(currentDepartment, currentDoctor);
                } else {
                    printf("\nPlease add a department first.\n");
                }
                break;
            case 3:
                if(currentDoctor != NULL) {
                    printf("\nEnter the details for a patient under the doctor:\n");
                    getUserInput(name, "Patient", currentDoctor->department);
                    TreeNode *patientNode = createNode(name, "Patient", currentDoctor->department);
                    addChild(currentDoctor, patientNode);
                } else {
                    printf("\nPlease add a doctor first.\n");
                }
                break;
            case 4:
                if(root != NULL) {
                    printTree(root, 0);
                } else {
                    printf("\nNo structure to print.\n");
                }
                break;
            case 5:
                freeTree(root);
                printf("\nExiting program...\n");
                return 0;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0; // This line will never be reached
}

// Implement the rest of the functions here...
