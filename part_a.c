#include <stdio.h>
#include <stdlib.h>

#define NUM_VERTICES 4

// Function to print the adjacency matrix
void printAdjacencyMatrix(int adjacencyMatrix[NUM_VERTICES][NUM_VERTICES]) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < NUM_VERTICES; i++) {
        for (int j = 0; j < NUM_VERTICES; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to print the adjacency list
void printAdjacencyList(int adjacencyMatrix[NUM_VERTICES][NUM_VERTICES]) {
    printf("Adjacency List:\n");
    for (int i = 0; i < NUM_VERTICES; i++) {
        printf("%d: ", i);
        int hasAdjacent = 0;
        for (int j = 0; j < NUM_VERTICES; j++) {
            if (adjacencyMatrix[i][j] == 1) {
                printf("%d->", j);
                hasAdjacent = 1;
            }
        }
        
        printf("NULL");
        printf("\n");
    }
}

int main() {
    int adjacencyMatrix[NUM_VERTICES][NUM_VERTICES] = {
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 0}
    };

    printAdjacencyMatrix(adjacencyMatrix);
    printAdjacencyList(adjacencyMatrix);

    return 0;
}
