#include <stdio.h>
int main() {
  
  int b[10][10], transpose[10][10], row, c;

  printf("Enter rows and columns: ");
  scanf("%d %d", &row, &c);

  
  printf("\nEnter matrix elements:\n");

  for (int i = 0; i < row; ++i)
  for (int j = 0; j < c; ++j) 
  {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &b[i][j]);
  }

  
  printf("\nEntered matrix: \n");

  for (int i = 0; i < row; ++i)
  for (int j = 0; j < c; ++j)
 {
    printf("%d  ", b[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < c; ++j) 
  {
    transpose[j][i] = b[i][j];
  }

  
  printf("\nTranspose of the matrix:\n");

  for (int i = 0; i < c; ++i)
  for (int j = 0; j < row; ++j) 
  {
    printf("%d  ", transpose[i][j]);
    if (j == row - 1)
    printf("\n");
    
  }
  return 0;
}