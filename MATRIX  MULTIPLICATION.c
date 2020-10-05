#include<stdio.h>
#define ROW 3
#define COLUMN 3
void matrixMultiplication();
int main(void)
{
	int matrix1[ROW][COLUMN],matrix2[ROW][COLUMN],i,j;
	printf("<-------Enter the elements in the matrix 1-------->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("Element at position matrix1[%d][%d] :-",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("<-------Enter the elements in the matrix 2--------->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("Element at position matrix2[%d][%d] :-",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	matrixMultiplication(matrix1,matrix2);
	return 0;
}
void matrixMultiplication(int matrix1[][COLUMN],int matrix2[][COLUMN])
{
	int i,j,k,sum=0;
	int matrix3[ROW][COLUMN];
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			for(k=0;k<ROW;k++){
				sum=sum+(matrix1[i][k]*matrix2[k][j]);
			}
			matrix3[i][j]=sum;
			sum=0;
		}
	}
	printf("\n<------Result of the multiplication of two matrix is----->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d\t",matrix3[i][j]);
		}
		printf("\n");
	}
}
