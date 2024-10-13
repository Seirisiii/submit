#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef struct Node {
    int data;
    Node* next;
} Node;

Node* head = NULL;
Node* createNode(int data) {
    //Your Code

    return newNode;
}

void insertFirst(int data) {
    //Your Code

}

void printList(Node* head) {
    while(head != NULL) {
        printf("%d", head -> data);
        if(head -> next != NULL) {
            printf(" -> ");
        }
        head = head -> next;
    }
    printf("\n");
    return ;
}


int main() {
    insertFirst(9);
    printList();
        insertFirst(19);
    printList();

    return 0;
}