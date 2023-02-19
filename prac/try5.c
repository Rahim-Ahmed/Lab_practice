
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

struct node{
char data;
struct node *next;

};

struct node *front=NULL, *rear=NULL;

void enqueue(char s){

    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->data=s;
    newNode->next=NULL;

    if(front==NULL && rear==NULL)
        front=rear=newNode;
    else {
        rear->next=newNode;
        rear=newNode;
    }
}

void display(){

    struct node *temp=front;

    if(front==NULL)
        printf("\nQueue is empty!!!!\n");

    else {

        while(temp)
        {
            printf("%c",temp->data);
            temp=temp->next;
        }

        printf("NULL\n");
        }




}

int main(){
                int i;
                char s[MAX];

    printf("\n Enter your data:");
     gets(s);
    for(i=0;s[i]!='\0';i++)
                {
                                if(s[i] != ' ') continue;
                                else
                                {
                                   enqueue(s[i]);
                                }
                                }
    display();

    return 0;
}
