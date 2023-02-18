
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *iVar;
    char *text;
    float *fVar;
    int n,i;
    iVar=(int*)malloc(1*sizeof(int));
    text=(char*)malloc(1*sizeof(char));
    fVar=(float*)malloc(1*sizeof(float));


    printf("\nEnter the number of Students: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("\n Enter Name for Student no %d: ",i);
    scanf(" ");
    gets(text);
     printf("\n Enter ID for Student no %d: ",i);
    scanf("%d",iVar);

     printf("\n Enter CGPA for Student no %d: ",i);
    scanf("%f",fVar);

    printf("\n---- ---- Info of Std NO %d---- ----",i);

    printf("\n Std Name: %s\n Std ID: %d,\n Std Cgpa: %.2f\n",text,*iVar,*fVar);
    printf("---- ---- ---- ---- ----",i);

    }

    /*free allocated memory*/
    free(iVar);
     free(text);
    free(fVar);

    return 0;
}
