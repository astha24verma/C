#include <stdio.h>
#include <stdlib.h>

// Implementation of Stack using Array
// Operations on stack -
// display()
// push()
// pop()


void push(int);
void pop();
void display();

int max = 20;
int stack[20], top = -1;

void push(int val)
{
    if (top == max - 1)
    {
        printf("Overflow !!");
    }
    else
    {
        top = top + 1;
        stack[top] = val;
        printf("Element inserted !\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow !!");
    }
    else
    {
        printf("Element deleted >> %d \n", stack[top]);
        top = top - 1;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d > ", stack[i]);
    }
    printf("X \n");
}

void main()
{
    int choice, val;
    while (1)
    {
        printf("Enter 1.Push 2.Pop 3.Display 4.Exit\n");
        // printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}