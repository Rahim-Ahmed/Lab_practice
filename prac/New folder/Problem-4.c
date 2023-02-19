#include <stdio.h>
#define MAX 50
int q1[MAX],q2[MAX],n,f1=-1,r1=-1,f2=-1,r2=-1;
void enq(int q[],int *f,int *r,int val){
            if(*r == MAX-1){
                printf("Maximum size reached");
            }
            else if(*f == -1 && *r == -1){
                *f=*r=0;
            }
            else{
                *r=*r+1;
            }
            q[*r]=val;
}
void display(int q[],int *f, int *r){
            int i;
            if(*f == -1){
                 printf("queue is empty ");
            }
            else{
                 for(i=*f;i<=*r;i++)
                 printf("%d\t",q[i]);
                }
}
main(){
        int i,val;
        printf("\nHow many element?\n");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("\nEnter element %d:\n", i+1);
            scanf("%d",&val);
            enq(q1,&f1,&r1,val);
        }
        printf("\n:::::::::::::::::::::::::::::::::::\n");
        printf("Queue 1 is:\n");
        display(q1,&f1,&r1);
        for(i=f1;i<=r1;i++){
            enq(q2,&f2,&r2,q1[i]);
        }
        printf("\nCopy queue 2 is:\n");
        display(q2,&f2,&r2);
        printf("\n:::::::::::::::::::::::::::::::::::\n");
}
