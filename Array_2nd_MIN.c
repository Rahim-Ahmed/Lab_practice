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
int min;
min=a[0];
for(i=1;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
}
printf(" \n The minimum value is = %d",min);

int sec_min;
sec_min=1000;
for(i=0;i<n;i++){
    if(a[i]<sec_min && a[i]> min){
        sec_min=a[i];
    }
}
printf(" \n The 2nd minimum value is = %d",sec_min);

}

