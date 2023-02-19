#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define SIZE 100

unsigned int size = 0;
int front = 0;
int rear = 0;
int queue[SIZE];

void enqueue();
void dequeue();
void displayQueue();
void totalSize();

int main (){
    int choice;
    while(1)
    {
        printf("                         :::Queue:::                        \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Items in the queue\n");
        printf("4. Size of the queue\n");
        printf("5. Exit\n");
        printf("                         :::Select:::                       \n");
        printf("Select your option: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayTotal();
                break;
            case 4:
                totalSize();
                break;
            case 5:
               printf("\nThank you\n");
               exit(5);
            default:
                printf("Select between between (1-5)");
                break;
        }
        printf("\n\n");
    }
}
void enqueue(){
    int item;
    if(rear == SIZE){
        printf("Queue is Full!!!\n");
    }

    else if (front == 0){
        printf("\nEnqueue element: ");
        scanf("%d", &item);
        printf("Added...\n");
        queue[rear] = item;
        rear = rear + 1;
    }
}
void dequeue()
{
    if (front == rear){
        printf("\nQueue is empty!!!\n");
    }
    else{
        printf("\nremoved: %d\n\n", queue[front]);
        front = front + 1;
    }
}
void displayTotal(){
    if (front == rear){
        printf("\nQueue is empty!!!");
    }
    else{
        printf("Total stored Data:\n\n");
        for (int i=front; i<rear; i++){
            printf("%d ", queue[i]);
        }
        printf("\n\n");
    }
}
void totalSize(){
    if (front == rear){
        printf("\nEmpty queue");
    }
    else{
       printf("Queue size is = %d", rear);
    }
}
