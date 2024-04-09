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

int main() {
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
    
    // Free the allocated memory
    // ... (Implement memory deallocation here)
    
    return 0;
}