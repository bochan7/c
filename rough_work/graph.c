#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 50

// Structure for a node in adjacency list
struct Node {
    int vertex;
    struct Node* next;
};

// Structure for an adjacency list
struct AdjList {
    struct Node *head;
};

// Structure for a graph
struct Graph {
    int numVertices;
    struct AdjList* array;
};

// Function to create a node
struct Node* createNode(int vertex) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf(" allocation failed\n");
        exit(1);
    }
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with given number of vertices
struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    if (graph == NULL) {
        printf(" allocation failed\n");
        exit(1);
    }
    graph->numVertices = numVertices;
    graph->array = (struct AdjList*)malloc(numVertices * sizeof(struct AdjList));
    if (graph->array == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < numVertices; ++i) {
        graph->array[i].head = NULL;
    }
    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

}

// Function to print the graph
void printGraph(struct Graph* graph) {
    for (int v = 0; v < graph->numVertices; ++v) {
        struct Node* temp = graph->array[v].head;
        printf("Adjacency list of vertex %d\n", v);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Function for depth-first search traversal
void DFSUtil(struct Graph* graph, int vertex, int* visited) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    struct Node* temp = graph->array[vertex].head;
    while (temp) {
        if (!visited[temp->vertex]) {
            DFSUtil(graph, temp->vertex, visited);
        }
        temp = temp->next;
    }
}

// Function to perform depth-first search traversal
void DFS(struct Graph* graph) {
    int* visited = (int*)malloc(graph->numVertices * sizeof(int));
    if (visited == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < graph->numVertices; ++i) {
        visited[i] = 0;
    }
    printf("Depth-First Search Traversal:\n");
    for (int i = 0; i < graph->numVertices; ++i) {
        if (!visited[i]) {
            DFSUtil(graph, i, visited);
        }
    }
    printf("\n");
    free(visited);
}

// Function for breadth-first search traversal
void BFS(struct Graph* graph, int startVertex) {
    int* visited = (int*)malloc(graph->numVertices * sizeof(int));
    if (visited == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < graph->numVertices; ++i) {
        visited[i] = 0;
    }
    visited[startVertex] = 1;
    printf("Breadth-First Search Traversal:\n");
    struct Node* queue[MAX_VERTICES];
    int front = 0, rear = 0;
    queue[rear++] = graph->array[startVertex].head;
    while (front != rear) {
        struct Node* temp = queue[front++];
        printf("%d ", temp->vertex);
        while (temp) {
            if (!visited[temp->vertex]) {
                queue[rear++] = graph->array[temp->vertex].head;
                visited[temp->vertex] = 1;
            }
            temp = temp->next;
        }
    }
    printf("\n");
    free(visited);
}

int main() {
    int numVertices = 5;
    struct Graph* graph = createGraph(numVertices);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    printf("Graph:\n");
    printGraph(graph);

    DFS(graph);
    BFS(graph, 2);

    return 0;
}

