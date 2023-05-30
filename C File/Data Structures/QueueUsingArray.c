#include <stdio.h>
#define maxsize = 20;

void insert(int);
void delete();
void display();

int queue[maxsize];
int front, rear;
front = rear = -1;

void insert(int val){
    if(rear == MAXSIZE - 1){
        printf("Overflow !");
    }
    else{
        if(front == -1){
            front++;
            rear++;
            queue[rear] = val;
        }
        else{
            rear++;
            queue[rear] = val;
        }
    }
}

void delete(){
    if(front == -1){
        printf("Underflow !")
    }else{
        if(front == rear && front != -1){
            front = rear = -1;       //empty queue
        }else{
            printf("Delete element -> %d", queue[front]);
            front++;
        }
    }
}

void display(){
    if(front == -1){
        printf("Underflow !");
    }else{
        for(int i = front; i <= rear; i++){
            printf("%d", queue[i]);
        }
    }
}

int main()
{
    int choice, val;
    while (1)
    {
        printf("Enter 1.Insert 2.Delete 3.Display 4.Exit\n");
        // printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &val);
            insert(val);
            break;
        case 2:
            delete();
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
