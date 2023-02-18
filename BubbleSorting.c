#include<stdio.h>;
int main(){
int a[100];
int n,i,pos=-1,item;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter your data :");

for(i=0; i<n;i++)
scanf("%d",&a[i]);
printf("Your array :");

for(i=0; i<n;i++)
printf("%d\t",a[i]);

int temp,j,c=0,o=0,p=0;
for(i=0; i<n-1;i++){
    for(j=0;j<n-1-i;j++)
    {c=0;
        if(a[j]>a[j+1])
        {   temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            c++;
            p++;
        }else o++;
    }
    if(c==0){
        printf("\nYour array :");
for(i=0; i<n;i++)
printf("%d\t",a[i]);

printf("\n Number of pass is %d and swap is %d:",o,p);
    exit(0);}
}

    printf("\nYour array :");
for(i=0; i<n;i++)
printf("%d\t",a[i]);

printf("\n Number of pass is %d and swap is %d :",o,p);
}
