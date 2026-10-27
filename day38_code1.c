//Q75: Add two matrices.
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main(void)
{
    int first [MAX_ROWS] [MAX_COLS];
    int second [MAX_ROWS] [MAX_COLS];
    int result [MAX_ROWS] [MAX_COLS];
    int rows, columns, i, j;
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d %d", &rows, &columns);
 if (rows < 1 || rows > MAX_ROWS || columns < 1 || columns > MAX_COLS)
 {
    printf("Invalid matrix size.\n");
    return 1;
 }
 printf("Enter the elements of the first matrix");
 for (i = 0; i < rows; i++)
 {
    for (j = 0; j < columns; j++)
    {
        scanf("%d", &first[i][j]);
    }
 }
 printf("Enter the elements of the second matrix:");
 for (i = 0; i < rows; i++)
 {
    for (j = 0; j < columns; j++)
    {
        scanf("%d", &second[i][j]);
    }
 }
 for (i = 0; i < rows; i++)
   {
       for (j = 0; j < columns; j++)
       {
           result[i][j] = first[i][j] + second[i][j];
       }
   }
 
   printf("Sum of the matrices:\n");
 
   for (i = 0; i < rows; i++)
   {
       for (j = 0; j < columns; j++)
       {
           printf("%4d", result[i][j]);
       }
 
       printf("\n");
   }
 
   return 0;
}