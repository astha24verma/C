#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
// head = NULL;

// Operations on singly linkedlist -

// addAtBeg()
// append()
// addAfter()
// delete()
// display()

void addAtBeg(int);
void append(int);
void addAfter(int, int);
void delete(int);
void display();

void addAtBeg(int val) 
{

    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void append(int val) 
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void addAfter(int val, int loc) 
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    // check loc is valid or not
    int count = 1;
    temp = head;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count < loc)
    {
        printf("Invalid position! Position is greater than number of nodes \n");
    }
    else
    {
        temp = head;
        for (int i = 1; i < loc; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void delete(int val)   
{
    if (head == NULL)
    {
        printf("LinkedList is empty. Can't perform deleltion! \n");
    }
    else
    {
        if (head->data == val && head->next == NULL)
        {
            printf("Head deleted! \n");
            free(head);
            head = NULL;
        }
        else
        {
            if (head->data == val)
            {
                printf("Node(head) deleted >> %d \n", head->data);
                head = head->next;
                // can free head
            }
            else
            {
                struct node *temp, *prev;
                temp = head;
                while (temp->data != val && temp->next != NULL)
                {
                    prev = temp;
                    temp = temp->next;
                }
                if (temp->data == val)
                {
                    prev->next = temp->next;
                    printf("Node deleted >> %d \n", temp->data);
                    free(temp);
                }
                else
                {
                    printf("Node not found !!\n");
                }
            }
        }
    }
}

void display() 
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf(" %d -> ", temp->data);
        temp = temp->next;
    }
    printf("X \n");
}

void main()
{
    head = NULL;
    int choice, val, loc;
    while (1)
    {
        printf("Enter choice : 1.addBeg 2.addAfter 3.append 4.delete 5.display 6.exit \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &val);
            addAtBeg(val);
            break;
        case 2:
            printf("Enter data and position to insert after : ");
            scanf("%d %d", &val, &loc);
            addAfter(val, loc);
            break;
        case 3:
            printf("Enter data : ");
            scanf("%d", &val);
            append(val);
            break;
        case 4:
            printf("Enter data : ");
            scanf("%d", &val);
            delete (val);
            break;
        case 5:
            display();
            printf("\n");
            break;
        case 6:
            exit(0);
        default:
            break;
        }
        // display();
    }
}
