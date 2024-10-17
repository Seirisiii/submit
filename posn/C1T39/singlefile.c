#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 1000000

int items[MAXSIZE];
int firstGreaterDay[MAXSIZE];
int top=-1;

bool isFull() {
    return top == MAXSIZE;
}

bool isEmpty() {
    return top == -1;
}


int peek() {
    return items[top];
}

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

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    find_firstGreaterDay(n, arr);
    return 0;
}