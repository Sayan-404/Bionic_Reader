#include<stdio.h>

void add(int ar1[50][50], int ar2[50][50], int n)
{
	int ar3[50][50];
	puts("The first Matrix");
        printarray(ar1,n);
        puts("The second Matrix");
        printarray(ar2,n);
	int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        ar3[i][j] =ar1[i][j]+ar2[i][j];
			//printf("%d",ar1[i][j]);
			//printf("%d ",ar2[i][j]);
			printf("%d ",ar3[i][j]);
                }
		printf("\n");
        }

}


void subtract(int ar1[50][50], int ar2[50][50], int n)
{
        int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        ar1[i][j] -= ar2[i][j];
                }
        }
        printarray(ar1);

}

void transpose(int ar[50][50],int n)
{
        int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        ar[j][i] = ar[i][j];
                }
        }
        printarray(ar);

}


void printarray(int arr[50][50], int n)
{
        int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d",arr[i][j]);
                }
		printf("\n");
        }
}

void main()
{
	int ar1[50][50];
	int ar2[50][50];
	
	int i,j;
	int n;
	puts("Enter the dimensions of the matrix \n");
	scanf("%d",&n);
	puts("Taking values for the fist matrix \n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			puts("Enter a number \n");
			scanf("%d",&ar1[i][j]);
		}
	}
	
	puts("Taking values for the second matrix \n");	
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        puts("Enter a number \n");
                        scanf("%d",&ar2[i][j]);
                }
        }
	add(ar1,ar2,n);
}
