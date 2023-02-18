
#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
printf("\nEnter the number of elements = ");
scanf("%d",&n);
int a[n];

for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nElements are : \n ");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);

int max;
max=a[0];
for(i=1;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}


int sec_max;
sec_max=0;
for(i=0;i<n;i++){
    if(a[i]>sec_max && a[i]<max ){
        sec_max=a[i];
    }
}



int min;
min=a[0];
for(i=1;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
}


int sec_min;
sec_min=max;
for(i=0;i<n;i++){
    if(a[i]<sec_min && a[i]>min ){
        sec_min=a[i];
    }
}
printf(" \n The maximum value is = %d",max);
printf(" \n The 2nd maximum value is = %d",sec_max);
printf(" \n\n The minimum value is = %d",min);
printf(" \n The 2nd minimum value is = %d \n\n",sec_min);

}
