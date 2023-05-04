#include<stdio.h>
#include<stdlib.h>

void push(int);
void pop();
void display();

int max = 20;
int stack[20], top = -1;

// Operations on stack -

// display()
// push()
// pop()


void display(){
    for(int i = top; i >= 0; i--){
        printf("Element = %d ", stack[i]);
    }
}

void push(int val){
    if(top == max - 1){
        printf("Overflow !!");
    }else{
        top = top + 1;
        stack[top] = val;
    }
}

void pop(){
    if(top == -1){
        printf("Underflow !!");
    }
    else{
        printf("Deleted element = %d ", stack[top]);
        top = top - 1;
    }
}

void main(){
    
}