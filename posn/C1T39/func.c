#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 1000000
extern bool isFull(); 
extern bool isEmpty(); 
extern int peek(); 
int items[MAXSIZE]; 
int firstGreaterDay[MAXSIZE]; 
int top = -1; 
void push(int data) {
    if(!isFull()) {
        /* Code Here */
    }
    else {
        printf("Stack is full.\n");
    }
    return ;
}

void pop() {
    if(!isEmpty()) {
        /* Code Here */
    }
    else {
        printf("Stack is empty.\n");
    }
    return ;
}

void find_firstGreaterDay(int n, int arr[]) {
    /* Code Here */
    return ;
}