#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;
Node* createNode(int data) {
    //Your Code

}

void insertFirst(int data) {
    //Your Code

}

void printList() {
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