
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 20
struct stack{

    int id;
    float cgpa;
    char *nam;

    struct stack *name;

} *top = NULL,*newNode;

void display(){

    printf("\n\n    --- --- Display value --- ---   \n");

    struct stack *temp = top;

    if(temp==NULL){

        printf("\nStack is empty");

    }

    while(temp != NULL){
        printf("\n %c  ", temp -> nam);
        printf("\n %d  ", temp -> id);

        printf("\n %f  ", temp -> cgpa);

        temp = temp -> name;

    }
printf("\n  ---------------------------------\n");

}

void push1(int a){

    newNode = (struct stack *)malloc(sizeof(struct stack));

    newNode->id = a;

    if(top == NULL){

        newNode->name = NULL;

        top = newNode;

    }else{

        newNode->name = top;

        top = newNode;

    }

}

void push2(float a){

    newNode = (float*)malloc(sizeof(float));

    newNode->cgpa = a;

    if(top == NULL){

        newNode->name = NULL;

        top = newNode;

    }else{

        newNode->name = top;

        top = newNode;

    }

}

void push3(char a){

    newNode = (char*)malloc(sizeof(char));

    newNode->nam = a;

    if(top == NULL){

        newNode->name = NULL;

        top = newNode;

    }else{

        newNode->name = top;

        top = newNode;

    }

}

int main(){



    int n,i,p;
    float c;
    char y;
    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){

        printf("Enter the name of student: ");
                scanf("%s", &y);
                push3(y);
        printf("Enter the id of student: ");
                scanf("%d", &p);
                push1(p);
        printf("Enter the cgpa of student: ");
                scanf("%f", &c);
                push2(c);
    }
    display();

    }
