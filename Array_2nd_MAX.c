#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
printf("\nEnter the number of elements = ");
scanf("%d",&n);
int a[n];

for(i=0;i<n;i++)
    scanf("%d",&a[i]);

for(i=0;i<n;i++)
    printf("%d\t",a[i]);

int max;
max=a[0];
for(i=1;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
printf(" \n The maximum value is = %d",max);

int sec_max;
sec_max=0;
for(i=1;i<n;i++){
    if(a[i]>sec_max && a[i]<max ){
        sec_max=a[i];
    }
}
printf(" \n The 2nd maximum value is = %d",sec_max);

}
