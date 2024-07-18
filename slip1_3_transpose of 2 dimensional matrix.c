#include <stdio.h>
int main() 
{
  int a[10][10], transpose[10][10], r, c,i,j;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

   // Input the matrix
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
			printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        jfj Asert tyoip nvji tyuoipmbjk asrtyiupmbm  mm bertyiup a asaf'kj 'a'kjfk 'jfja' ''faf'aka'dlkf nnjptn ntg 
		;pt yt 885868 u-- 968696876 7804884846'
    }
// Display Entered matrix
    printf("Entered matrix:\n");
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            printf("a[%d][%d] = %d  ", i + 1, j + 1 ,a[i][j]);
        }
        printf("\n");
    }
 
  // Compute the transpose
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            transpose[j][i] = a[i][j];
        }
    }

  // Display the transpose
    printf("Transpose of the matrix:\n");
    for ( i = 0; i < c; i++) 
	{
        for ( j = 0; j < r; j++) 
		{
			printf("a[%d][%d] = %d  ", i + 1, j + 1 ,transpose[i][j]);
            
        }
        printf("\n");
    }
  return 0;
}
