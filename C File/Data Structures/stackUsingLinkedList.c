#include <stdio.h>
#include <stdlib.h>

// Implementation of Stack using Linked List
// Operations on stack -
// display()
// push()
// pop()
struct node
{
    int data;
    struct node *next;
};

struct node *top;
// top = NULL;

int count = 0;

void push(int val)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (top == NULL)
    {
        top = newNode;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
    count++;
    printf("Element inserted !\n");
}

void pop()
{
    struct node *temp;
    
    if (top == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }
    else
    {
        printf("Element deleted >> %d\n", top->data);
        temp = top;
        top = top->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = top;

    if (top == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d > ", temp->data);
            temp = temp->next;
        }
        printf("X\n");
    }
}

int main()
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
            printf("\nWrong Choice\n");
        }
    }
}
