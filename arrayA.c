#include<stdio.h>
int main()
{
	int matA[3][3],matB[3][3],res[3][3],mul[3][3];
	int i,j,k;
	int temp[3][3];
	int tmp=0;
	printf("enter the 9 elements of matrix A:\n");

// scanf for matrix A;
for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&matA[i][j]);
		}
	}

// mat A; 
printf("\n");
for (i = 0; i < 3; i++)
{
	for (j = 0; j < 3; j++)
		printf("%d ",matA[i][j]);
		printf("\n");
}
// scanf for matrix B;
printf("enter the 9 elements of matrix B:\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&matB[i][j]);
		}
	}
printf("\n");
// mat B; 
for (i = 0; i < 3; i++)
{
	for (j = 0; j < 3; j++)
		printf("%d ",matB[i][j]);
		printf("\n");
}


// matrix Add;
/*
for (i = 0; i < 3; i++)
{
	for (j = 0; j < 3; j++)
	{
		res[i][j]=matA[i][j]+matB[i][j];
	}
}

printf("\nMatrix Addition:\n");
for (i = 0; i < 3; i++)
{
	for (j = 0; j < 3; j++)
		printf("%d ",res[i][j]);
		printf("\n");
}
*/
// Matrix MUl A*B; // mul[][];

for (k = 0; k < 3; k++)
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <3; j++)
			{
			mul[k][i] = matA[k][j] * matB[j][i];
			mul[k][i]=temp[k][i]+mul[k][i];
			//printf("value is %d\n",mul[k][i]);
			//printf("tmp=%d\n",tmp);
		
			temp[k][i]= temp[k][i] + mul[k][i];
			
			
			
			
			//temp[k][i] = tmp + mul[k][i];
			//tmp=mul[k][i];

			//printf("value of temp is %d \n",temp[k][i]);
			}
			//printf("\n");
			
	}
}
printf("\n");
for (i = 0; i < 3; i++)
{
	for (j = 0; j < 3; j++)
		printf("%d ",temp[i][j]);
		printf("\n");
}

}