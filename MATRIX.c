
#include<stdio.h>

int main(){

    int choice,r, c, a[10][10], b[10][10], sum[10][10], i, j, result[10][10], r1, c1, r2, c2;;

    while(1){

    printf("\n   Enter your choice;\n Press 1 for addition:\n Press 2 for subtraction:\n Press 3 for multiplication:\n Press 4 for exit: \n\n");
    scanf("%d",&choice);
    switch(choice){

    case 1:
          printf("You have chosen matrix addition:\n");
          printf("Enter the number of rows: ");
          scanf("%d", &r);
          printf("Enter the number of columns: ");
          scanf("%d", &c);
            while(r!=c){
          printf("\nMatrix Order must be same for addition. please try again ");
          printf("\nEnter the number of rows: ");
          scanf("%d", &r);
          printf("\nEnter the number of columns: ");
          scanf("%d", &c);
          }

          printf("\n Elements of first matrix A:\n");
          for (i = 0; i < r; ++i)
          for (j = 0; j < c; ++j) {
          printf("Enter element a%d%d: ", i + 1, j + 1);
          scanf("%d", &a[i][j]);
            }

          printf("\nElements of second matrix B:\n");
          for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j) {
              printf("Enter element b%d%d: ", i + 1, j + 1);
              scanf("%d", &b[i][j]);
            }

          for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j) {
              sum[i][j] = a[i][j] + b[i][j];
            }

          printf("\nSum of two matrices(A+B): \n");
          for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j) {
              printf("%d   ", sum[i][j]);
              if (j == c - 1) {
                printf("\n\n");
              }
            }
        break;



    case 2:
         printf("You have chosen matrix subtraction:\n");
          printf("Enter the number of rows: ");
          scanf("%d", &r);
          printf("Enter the number of columns: ");
          scanf("%d", &c);
            while(r!=c){
          printf("\nMatrix Order must be same for addition. please try again ");
          printf("\nEnter the number of rows: ");
          scanf("%d", &r);
          printf("\nEnter the number of columns: ");
          scanf("%d", &c);
          }

          printf("\n Elements of first matrix A:\n");
          for (i = 0; i < r; ++i)
          for (j = 0; j < c; ++j) {
          printf("Enter element a%d%d: ", i + 1, j + 1);
          scanf("%d", &a[i][j]);
            }

          printf("\nElements of second matrix B:\n");
          for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j) {
              printf("Enter element b%d%d: ", i + 1, j + 1);
              scanf("%d", &b[i][j]);
            }

          for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j) {
              sum[i][j] = a[i][j] - b[i][j];
            }

          printf("\nsubtraction of two matrices (A-B) : \n");
          for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j) {
              printf("%d   ", sum[i][j]);
              if (j == c - 1) {
                printf("\n\n");
              }
            }
        break;



    case 3:
     printf("You have chosen matrix multiplication:\n");

        printf("\nEnter rows and column for the first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("\nEnter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);

   while (c1 != r2) {
      printf("\nMatrix Order must be same for addition. please try again.\n");
      printf("\nEnter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("\nEnter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }

          printf("\n Elements of first matrix A:\n");
          for (i = 0; i < r1; ++i)
          for (j = 0; j < c1; ++j) {
          printf("Enter element a%d%d: ", i + 1, j + 1);
          scanf("%d", &a[i][j]);
            }

          printf("\nElements of second matrix B:\n");
          for (i = 0; i < r2; ++i)
            for (j = 0; j < c2; ++j) {
              printf("Enter element b%d%d: ", i + 1, j + 1);
              scanf("%d", &b[i][j]);
            }

for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

   // Multiplying first and second matrices and storing it in result
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += a[i][k] * b[k][j];
         }
      }
   }
          printf("\n multiplication of two matrices (A*B) : \n");
          for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         printf("%d  ", result[i][j]);
         if (j == c2 - 1)
            printf("\n");
      }
   }
        break;


    case 4:
        exit(0);


    default:
        printf("Wrong choice: try another\n");
    }

    }
    return 0;
}
