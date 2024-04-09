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
    TreeNode *hospital = createNode("XYZ HOSPITAL", "Hospital", "N/A");

    // Add departments
    TreeNode *cardiology = createNode("Cardiology", "Department", "N/A");
    TreeNode *neurology = createNode("Neurology", "Department", "N/A");
    addChild(hospital, cardiology);
    addChild(hospital, neurology);

    // Add doctors to Cardiology
    TreeNode *drRamesh = createNode("Dr. ramesh", "Doctor", "Cardiology");
    TreeNode *drSuresh = createNode("Dr. suresh", "Doctor", "Cardiology");
    addChild(cardiology, drRamesh);
    addChild(cardiology, drSuresh);

    // Add patients to Dr. Smith
    TreeNode *patient1 = createNode("kilo", "Patient", "Cardiology");
    TreeNode *patient2 = createNode("mike", "Patient", "neurology");
    addChild(drRamesh, patient1);
    addChild(drSuresh, patient2);

    // Print the tree
    printTree(hospital, 0);

    // Free the allocated memory
    // ... (Implement memory deallocation here)

    return 0;
}
