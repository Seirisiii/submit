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
        ++top;
        items[top]=data;
    }
    else {
        printf("Stack is full.\n");
    }
    return ;
}

void pop() {
    if(!isEmpty()) {
        /* Code Here */
        --top;
    }
    else {
        printf("Stack is empty.\n");
    }
    return ;
}

void find_firstGreaterDay(int n, int arr[]) {
    /* Code Here */
    for(int i=0;i<n;++i){
        firstGreaterDay[i]=-1;
        while(!isEmpty() && arr[i]>arr[peek()]){
            firstGreaterDay[peek()]=i+1;
            pop();
        }
        push(i);
    }
    for(int i=0;i<n;++i){
        printf("%d ",firstGreaterDay[i]);
    }
    return ;
}