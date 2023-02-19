
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

struct node{
char data;
struct node *next;

};

struct node *front=NULL, *rear=NULL;

void det_negative(){
     struct node *temp=front;
    struct node *temp2;
    while(1){

     if (temp->data<0){
        // printf(" %d",temp->data);
        front = temp->next;
        temp2=temp;
        free(temp2);
        temp2=NULL;
        temp=temp->next;
    }
    else {
        break;
    }
    }
    struct node *tempp=front;
    struct node *current =front;
  //  struct node *previous =front;

    while(tempp!=NULL){
        if (tempp->data<0){
          current->next= tempp->next;
          temp2=tempp;
          free(temp2);
          temp2=NULL;
          current=current->next;
        }
        tempp=tempp->next;
    }

}

void enqueue(){

    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    int item;
    scanf("%d",&item);

    newNode->data=item;
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
            printf("%d--> ",temp->data);
            temp=temp->next;
        }

        printf("NULL\n");
        }




}

int main(){
    int i,n;
    printf("\n Enter number of elements: ");
    scanf("%d",&n);
    printf("\n Enter %d elements: ",n);
    for(i=0;i<n;i++)
        {
          enqueue();
        }
    printf("\n Before delete: ");
    display();
     printf("\n After delete: ");
    det_negative();
    display();


    return 0;
}
