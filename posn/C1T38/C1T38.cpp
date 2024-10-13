#include<bits/stdc++.h>
using namespace std;

// โครงสร้าง Node
struct Node {
    int data;
    Node* next;  // ใช้ raw pointer
};

Node* head=NULL;

Node* createNode(int data) {
    //Your Code
    Node *newnode=new Node;
    newnode->data=data;
    return newnode;
}

void insertFirst(int data) {
    //Your Code
    Node *tmp=head;
    head=createNode(data);
    head->next=tmp;
    return ;
}

